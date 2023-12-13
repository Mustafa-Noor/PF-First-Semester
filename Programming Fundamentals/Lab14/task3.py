def totalOvers(balls):
    overs=balls//6
    remainingballs=balls%6
    overs_balls="{0}.{1}".format(overs,remainingballs)
    return overs_balls

balls=int(input("Enter the number of balls: "))
print(totalOvers(balls))