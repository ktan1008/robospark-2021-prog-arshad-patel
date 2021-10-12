import cv2
import numpy as np

cap=cv2.imread("masking.jpg")

def fun(x):
    pass

def colormask():
    cv2.namedWindow("masking")
    bh='blue high'
    bl = 'blue low'
    gh = 'green high'
    gl = 'green low'
    rh = 'red high'
    rl = 'red low'

    cv2.createTrackbar(bl,'masking',0,255,fun)
    cv2.createTrackbar(gl, 'masking', 0, 255, fun)
    cv2.createTrackbar(rl, 'masking', 0, 255, fun)
    cv2.createTrackbar(bh, 'masking', 0, 255, fun)
    cv2.createTrackbar(gh, 'masking', 0, 255, fun)
    cv2.createTrackbar(rh, 'masking', 0, 255, fun)

    while True :
        hsv=cv2.cvtColor(cap,cv2.COLOR_RGB2HSV)

        btl=cv2.getTrackbarPos(bl,'masking')
        gtl = cv2.getTrackbarPos(gl, 'masking')
        rtl = cv2.getTrackbarPos(rl, 'masking')
        bth = cv2.getTrackbarPos(bh, 'masking')
        gth = cv2.getTrackbarPos(gh, 'masking')
        rth = cv2.getTrackbarPos(rh, 'masking')

        rgbl=np.array([110,50,50],np.uint8)
        rgbh=np.array([130,255,255],np.uint8)

        mask1=cv2.inRange(hsv,rgbl,rgbh)

        cv2.imwrite('mask1.jpeg',mask1)

        rgbl = np.array([2,120,0], np.uint8)
        rgbh = np.array([40,255,255], np.uint8)

        mask2 = cv2.inRange(hsv, rgbl, rgbh)

        cv2.imwrite('mask2.jpeg', mask2)

        rgbl = np.array([65, 60, 60], np.uint8)
        rgbh = np.array([80, 255, 255], np.uint8)

        mask3 = cv2.inRange(hsv, rgbl, rgbh)

        cv2.imwrite('mask3.jpeg', mask3)

        k=cv2.waitKey(1)
        if k == 32:
             break
colormask()
cv2.destroyAllWindows()

"""
red:[110,50,50],[130,255,255]
blue:[2,120,0],[40,255,255]
green:[65, 60, 60],[80, 255, 255]
"""