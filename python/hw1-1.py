from math import *

num1,num2=[int(i) for i in input().split(' ')]
def hypotenuse(num1,num2):
    return sqrt(num1*num1+num2*num2)
print(int(hypotenuse(num1,num2)))