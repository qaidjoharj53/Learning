import turtle

turtle.Screen().bgcolor("cyan")
t = turtle.Turtle()
t.speed(0)
t.hideturtle()

for i in range(120):
    t.color("red")
    t.circle(i)
    t.color("orange")
    t.circle(i * 0.8)
    t.right(3)
    t.forward(3)
turtle.done()
