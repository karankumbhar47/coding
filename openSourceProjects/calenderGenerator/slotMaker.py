import cv2

img = cv2.imread("D:\coding\openSourceProjects\calenderGenerator\images\commonTimeTable.jpg")
cv2.imshow("image",img)
cv2.waitKey(0)
cv2.destroyAllWindows()