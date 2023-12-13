import os.path

def main():
    if(os.path.exists("data.txt")):
        f = open("data.txt",'w')
        f.write("\nMustafa")
        f.close()
    else:
        print("file does not exist")


if __name__ == "_main_":
    main()