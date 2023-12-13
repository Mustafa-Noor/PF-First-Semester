def findLength(number):
    count = 0
    for i in number:
        count += 1
    return count  

number = input("Enter number to measure the length of: ")
print("The length is:", findLength(number))