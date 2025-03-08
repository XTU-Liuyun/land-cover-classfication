
from Dataset_progress import Segmentation_Dataset
from model import UNet, FocalLoss
from trainer import Train
import numpy as np # linear algebra
import pandas as pd # data processing, CSV file I/O (e.g. pd.read_csv)
import os
import matplotlib.pyplot as plt
import cv2
from tqdm import tqdm
import torch

from torch.utils.data import DataLoader
from torchvision import transforms

TRAIN_DIR = r"D:\Dataset\kaggle-land-cover\train"
VALID_DIR = r"D:\Dataset\kaggle-land-cover\valid"
TEST_DIR = r"D:\Dataset\kaggle-land-cover\test"
COLOR_CODES = r"D:\Dataset\kaggle-land-cover\class_dict.csv"

transform = transforms.Compose([
    transforms.ToTensor(),
    transforms.Resize((256, 256)),
])

df = pd.read_csv(COLOR_CODES)
label_map = {}
for index, row in df.iterrows():
    label_map[index] = [row["r"],row["g"],row["b"]]

print(label_map)
print("yes1")
num_classes = len(label_map.keys())
lr = 0.001
batch_size = 4
model = UNet(n_class=num_classes)
train_dataset = Segmentation_Dataset(TRAIN_DIR, label_map, transform)
train_dataloader = DataLoader(train_dataset, batch_size=batch_size, shuffle=True)
optimizer = torch.optim.AdamW(model.parameters(), lr)
num_epochs = 200
device =  torch.device("cuda:0" if torch.cuda.is_available() else "cpu")
loss = FocalLoss()
trainer = Train(model, train_dataloader, optimizer, num_epochs, device, loss)
trainer.train()
torch.save(model.state_dict(), 'full_model.pth')

