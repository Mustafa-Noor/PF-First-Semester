def findSum(number):
    sum=0
    for digit in str(number):
        sum=sum+int(digit)
    return sum

def checkOddorEven(sum):
    if sum%2==0:
        return "Evenish"
    else:
        return "Oddish"
    

number=int(input("Enter the number: "))
sum=findSum(number)
print(checkOddorEven(sum))