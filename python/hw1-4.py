import turtle 

screen = turtle.Screen()
screen.bgcolor('lightGreen')
screen.setup(300, 100)
myTurtle = turtle.Turtle()
myTurtle.color('hotpink')
myTurtle.pensize(4)

myTurtle.penup()
myTurtle.goto(-100, 0)
for i in range(1,6):
    myTurtle.forward(20)
    myTurtle.pendown()
    myTurtle.right(90)
    for j in range(1,5):
        myTurtle.right(90)
        myTurtle.forward(20)
        
    myTurtle.penup()
    myTurtle.left(90)
    myTurtle.forward(20)
   
screen.exitonclick()