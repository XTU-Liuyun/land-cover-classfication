import numpy as np # linear algebra
import pandas as pd # data processing, CSV file I/O (e.g. pd.read_csv)
import os
import matplotlib.pyplot as plt
import cv2
from tqdm import tqdm
import torch
from torch.utils.data import Dataset
from torch.utils.data import DataLoader
from torchvision import transforms
import torch.nn as nn
from torch.nn import functional as F
from torch.autograd import Variable
import cv2
import numpy as np
from model import UNet

TRAIN_DIR = r"D:\Dataset\kaggle-land-cover\train"
VALID_DIR = r"D:\Dataset\kaggle-land-cover\valid"
TEST_DIR = r"D:\Dataset\kaggle-land-cover\test"
COLOR_CODES = r"D:\Dataset\kaggle-land-cover\class_dict.csv"


def predict(filePath,OUTPUT_PATH):

    transform = transforms.Compose([
        transforms.ToTensor(),
        transforms.Resize((256, 256)),
    ])
    df = pd.read_csv(COLOR_CODES)
    label_map = {}
    for index, row in df.iterrows():
        label_map[index] = [row["r"], row["g"], row["b"]]
    model = UNet(n_class=len(label_map.keys()))
    device = torch.device("cuda:0" if torch.cuda.is_available() else "cpu")
    model.load_state_dict(torch.load('D:/my-land-cover-classfication/full_model.pth'))
    model.to(device)
    model.eval()
    img = cv2.imread(filePath)
    img = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
    input_tensor = transform(img)
    input_batch = input_tensor.unsqueeze(0).to(device)

    with torch.no_grad():
        output = model(input_batch).squeeze()

    _, predicted_labels = torch.max(output, 0)
    predicted_mask = predicted_labels.squeeze().cpu().numpy()
    print(torch.unique(predicted_labels))

    label_map_colors = {0: [0, 255, 255],
                        1: [255, 255, 0],
                        2: [255, 0, 255],
                        3: [0, 255, 0],
                        4: [0, 0, 255],
                        5: [255, 255, 255],
                        6: [0, 0, 0]}

    colored_mask = np.zeros((predicted_mask.shape[0], predicted_mask.shape[1], 3), dtype=np.uint8)
    for label, color in label_map_colors.items():
        colored_mask[predicted_mask == label] = color
    # CRF噪点处理

    cv2.imwrite(OUTPUT_PATH, cv2.cvtColor(colored_mask, cv2.COLOR_RGB2BGR))
    '''
    plt.subplot(1, 2, 1)
    plt.imshow(img)
    plt.axis('off')
    plt.subplot(1, 2, 2)
    plt.imshow(colored_mask)
    plt.axis('off')
    plt.show()
    '''
    return OUTPUT_PATH
