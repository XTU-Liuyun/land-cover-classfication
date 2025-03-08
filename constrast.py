import os
import cv2
import numpy as np
def constrast(filePath_1,filePath_2,output):
    img_1=cv2.imread(filePath_1)
    img_2=cv2.imread(filePath_2)
    gray1 = cv2.cvtColor(img_1, cv2.COLOR_BGR2GRAY)
    gray2 = cv2.cvtColor(img_2, cv2.COLOR_BGR2GRAY)
    diff = cv2.absdiff(gray1, gray2)
    _, diff_binary = cv2.threshold(diff, 30, 255, cv2.THRESH_BINARY)
    cv2.imwrite(output, diff_binary)
