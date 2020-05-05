import cv2
import glob
import shutil
import os
import argparse

def video2frames(video_file,frame_rate,output="./image_dir/",img_file="img_%s.png"):
    if os.path.exists(output):
        shutil.rmtree(output)#delete all directory(with subdiredtory)

    if not os.path.exists(output):
        os.makedirs(output)

    i = 0
    cap = cv2.VideoCapture(video_file)
    fps = cap.get(cv2.CAP_PROP_FPS)
    num_cap = int(cap.get(cv2.CAP_PROP_FRAME_COUNT))

    for i in range(num_cap):
        flag,frame = cap.read()
        if flag == True and i % frame_rate ==0:

            cv2.imwrite(output+img_file % str(i).zfill(6),frame)
            print("Save",output+img_file % str(i).zfill(6))
            
    cap.release()

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--input")
    parser.add_argument("--frame_rate",default=29.98769915651359)
    args=parser.parse_args()

    video2frames(args.input,args.frame_rate)

if __name__ == "__main__":
    main()
    


