likesorDislikes=[]
move="n"
while(move!="y"):
    entry=input("Enter the like or Dislike: ")
    likesorDislikes.append(entry)
    move=input("Enter y to stop or n to continue: ")
    
if(likesorDislikes[-1]==likesorDislikes[-2]):
    print("Nothing")
    
elif(likesorDislikes[-1]!=likesorDislikes[-2]):
    print(likesorDislikes[-1])

    