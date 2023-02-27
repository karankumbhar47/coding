import os

folderPath = r"D:\Academic\courses\[FTUForum.com] Udemy - Mastering Data Structures & Algorithms using C and C++"
folders = [f for f in os.listdir(folderPath)]


l=0
for folder in folders:
    path = folderPath+"\\"+folder

    filesSrt = [f for f in os.listdir(path) if '.srt' in f.lower()]
    filesMp4 = [f for f in os.listdir(path) if '.mp4' in f.lower()]
    filesPdf = [f for f in os.listdir(path) if '.pdf' in f.lower()]

    srtPath = path + '\srtFiles'
    mp4Path = path + '\Videos'
    pdfPath = path + '\Pdfs'
    os.mkdir(srtPath)
    os.mkdir(mp4Path)
    os.mkdir(pdfPath)


    for file in filesSrt:
        old_path = path+"\\" + file
        new_path = srtPath+"\\" + file
        # print(old_path)
        # print(new_path)
        os.rename(old_path, new_path)
    # print("\n")
    for file in filesMp4:
        old_path = path+"\\" + file
        new_path = mp4Path+"\\" + file
        # print(old_path)
        # print(new_path)
        os.rename(old_path, new_path)
    # print("\n")

    for file in filesPdf:
        old_path = path+"\\" + file
        new_path = pdfPath+"\\" + file
        # print(old_path)
        # print(new_path)
        # print("\n")
        os.rename(old_path, new_path)
    
    l+=1
    print(folder+" done..")
    if l==22:
        break