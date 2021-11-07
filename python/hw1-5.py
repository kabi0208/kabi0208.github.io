import turtle 

n,len=[int(i) for i in input().split(' ')]
screen = turtle.Screen()
screen.bgcolor('lightGreen')
screen.setup(400, 400)
myTurtle = turtle.Turtle()
myTurtle.color('hotpink')
myTurtle.pensize(4)

myTurtle.penup()
#myTurtle.goto(-100, 0)
myTurtle.pendown()
for i in range(0,n):
    myTurtle.forward(len)
    myTurtle.left(180)
    myTurtle.right(((n-2)*180)/n)
    
   
screen.exitonclick()