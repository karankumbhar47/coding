# import matplotlib.pyplot as plt 
# x = [1,2,3]
# # corresponding y axis values
# y = [2,4,1]
 
# # plotting the points
# plt.plot(x, y)
 
# # naming the x axis
# plt.xlabel('x - axis')
# # naming the y axis
# plt.ylabel('y - axis')
 
# # giving a title to my graph
# plt.title('My first graph!')
 
# # function to show the plot
# plt.show()
# class StoreImformation:
#     def __inti__(self,name,salary,address,unit):
#         self.name=name
#         self.salary=salary 
#         self.address=address
#         self.unit=unit
#     def printData(self):
#         print(f'{self.name}')
# karan=StoreImformation('Karan',100,'Vasagade',8)


# print(karan.__class__)
# print(karan.__dict__)

# import array
# for i in array.__dict__:
#     print(i)
    
# print('********************************')
# import random
# for i in random.__dict__:
#     print(i)

# from curses.panel import update_panels


# class Capital:
#     def upper(self):
#         a='abcdefghijklmnopqrstuvwxyz'
#         A='ABCDEFGHIJKLMNOPQRSTUVWXYZ'
#         self.s=''
#         for i in self.string:
#             self.s=self.s+A[a.index(i)]
#         return self.s

#     def get_string(self,s):
#         self.string=s

#     def print_string(self):
#         print(Capital.upper(self))

# karan=Capital()
# karan.get_string('karan')
# karan.print_string()

# l=[(2,3),[2,4],3,4,(3,4),[3,4]]
# if (2,3) in l:
#     print((2,3))
# if [2,3] in l:
#     print([2,3])


# if state==s1(x1,y1):
#     x=[x1-1,x1-1,x1+1,x1+1,x1-2,x1-2,x1+2,x1+2]
#     y=[y1-2,y1+2,y1-2,y1+2,y1-1,y1+1,y1+1,y1-1]
#     xf=[]
#     for i in range(8):
#         if x[i]>=1 and x[i]<=8 and y[i]>=1 and y[i]<=8:
#             xf.append([x[i],y[i]]) 
#     return xf
    
# def s2(x1,y1,x2,y2,sum):
#     l1=f1(x1,y1)
#     if [x2,y2] in l1:
#         sum=sum+1
#         return sum
#     elif sum>=1: 
#         return False
# def s3(x1,y1,x2,y2,sum):
#     s1=f2(x1,y1,x2,y2,sum)
#     if s1!=False:
#         return s1
#     elif s1==False:
#         pass
#     else:
#         sum=sum+1
#         l1=f1(x1,y1)
#         for j in l1:
#             s=f2(j[0],j[1],x2,y2,sum)
#             if s==False:
#                 continue
#             else:
#                 return s
# for _ in range(int(input())):
#     x1,y1,x2,y2=map(int,input().split())
#     if x1==x2 and y1==y2:
#         print("YES")
#     else:
#         if f3(x1,y1,x2,y2,0)%2==0:
#             print('YES')
#         else:
#             print("NO")


# if state==s1:
#     x=[x1-1,x1-1,x1+1,x1+1,x1-2,x1-2,x1+2,x1+2]
#     y=[y1-2,y1+2,y1-2,y1+2,y1-1,y1+1,y1+1,y1-1]
#     xf=[]
#     for i in range(8):
#         if x[i]>=1 and x[i]<=8 and y[i]>=1 and y[i]<=8:
#             xf.append([x[i],y[i]]) 
#     return xf
# elif state==s2:
#     def s2(x1,y1,x2,y2,sum):
#     l1=f1(x1,y1)
#     if [x2,y2] in l1:
#         sum=sum+1
#         return sum
#     elif sum>=1: 
#         return False
# def state==s3:
#     s1=f2(x1,y1,x2,y2,sum)
#     if s1!=False:
#         return s1
#     elif s1==False:
#         pass
#     else:
#         sum=sum+1
#         l1=f1(x1,y1)
#         for j in l1:
#             s=f2(j[0],j[1],x2,y2,sum)
#             if s==False:
#                 continue
#             else:
#                 return s


# class comp:
#     def __init__(self,x1,y1,x2,y2):
#         self.x1=x1
#         self.y1=y1
#         self.x2=x2
#         self.y2=y2
#         self.sum=0
#         self.l=comp.state1(self.x1,self.y1)
#         self.pl=[]
#         comp.state2(self,self.x1,self.y1,self.x2,self.y2)




#     def state1(self,x1,y1):
#         x=[x1-1,x1-1,x1+1,x1+1,x1-2,x1-2,x1+2,x1+2]
#         y=[y1-2,y1+2,y1-2,y1+2,y1-1,y1+1,y1+1,y1-1]
#         xf=[]
#         for i in range(8):
#             if x[i]>=1 and x[i]<=8 and y[i]>=1 and y[i]<=8:
#                 xf.append([x[i],y[i]]) 
#         return xf

#     def state2(self,x1,y1,x2,y2):
#         l=comp.state1(x1,y1)
#         if [x2,y2] in l:
#             self.sum+=1
#             return self.sum
#         else:
#             if self.sum==0:
#                 self.sum+=1
#                 comp.state3(self)
#             else:
#                 return False
            
#     def state3(self):
#             count=0
#             while count<len(self.l):
#                 self.final= comp.state2(self,self.l[count],self.l[count],x2,y2,count)
#                 if self.final==False and count<len(self.l):
#                     count=count+1
#                     pass
#                 elif count>=len(self.l):
#                     sum+=1
#                     self.pl=self.l
#                     for i in self.pl:
#                         count=0
#                         self.l=comp.state1(i[count][0].i[count][1])
#                         if comp.state2()

#                 else:
#                     return self.final


# import turtle

# turtle.forward(50)
# turtle.left(90)
# turtle.forward(50)
# turtle.left(90)
# turtle.forward(50)
# turtle.left(90)
# turtle.forward(50)
# turtle.left(90)
 
# import math
# for i in range(int(input())):
#     a,b,n=map(int, input().split())
#     if a==b:
#         print(-1)
#     else:
#         t=True  
#         i==(a*b)/math.gcd(a,b)
#         while(t):
#             if i<n:
#                 i+=i
#             else:
#                 if n%a==0:
#                     j=n
#                 else:
#                     j=a*((n//a)+1)
#                 while j<=i:
#                     if i%a==0:
#                         if i%b!=0:
#                             t=False
#                             break
#         print(i)

# def f(p,s,rp,n):
#     if ((rp+x)//y)>0:
#            p=p+((rp+x)//y)
#            s=n-p
#            rp=r-((s*x)+(p*y))
#            if p>n:
#                p=n
#                s=0
#                print(0,n)
#                return
#            f(p,s,rp,n)
#     else:
#         print(s,p)
#         return

# for i in range (int(input())):
#     x,y,n,r=map(int,input().split())
#     p=0
#     s=0
#     if x>r or (n*x)>r:
#         print(-1)
#     elif (r//x)>n:
#        p=(r-(n*x))//y
#        s=n-p
#        rp=r-((s*x)+(p*y))
#        f(p,s,rp,n)
#     else:
#         print(-1)
# l=[]       
# l.sort()

# import turtle as t

# t.bgcolor("black")
# colors = ['red','purple','blue','green']
# t.speed(0)

# x=30
# y=0

# while True:
#     t.circle(x)
#     t.pencolor(colors[y % 4])
#     t.forward(x)
#     t.right(90)

#     x+=1
#     y+=1

#     if y == 100:
#         break
# t.done()
# import turtle as t
# from random import  randint

# t.bgcolor("black")
# t.speed(0)

# x=1

# while x<400:
#     r=randint(0,255)
#     g=randint(0,255)
#     b=randint(0,255)
#     t.colormode(255)
#     t.pencolor(r,g,b)

#     t.forward(x+5)
#     t.right(90.99)
#     x=x+1

# t.done()
# import turtle as t

# l = 200

# def triangle():
#     for i in range(3):
#        t.forward(l)
#        t.right(120)

# def triangle2(l):
#     for i in range(3):
#        t.forward(l)
#        t.right(120)

# def polygon(l, n):
#    angle = 360 / n
#    for i in range(n):
#        t.forward(l)
#        t.right(angle)

# def five_star(l):
#     for i in range(5):
#        t.forward(l)
#        t.right(144)
# def circle():
#     for i in range(36):
#        t.forward(10)
#        t.right(15)

# def square(x, y, l):
#    t.penup()
#    t.goto(x, y)
#    t.pendown()
#    for i in range(4):
#        t.forward(l)
#        t.right(90)
# def setpen(x, y):
#    t.penup()
#    t.goto(x, y)
#    t.pendown()
#    t.setheading(0)

# def square(x, y, l):
#    setpen(x, y)
#    for i in range(4):
#        t.forward(l)
#        t.right(90)

# def square_line(x, y, l, n, dis):
#     for i in range(n):
#        inner_x = x + (l + dis) * i
#        square(inner_x, y, l)

# def square_matrix(x, y, l, n, dis, m):
#     for i in range(m):
#        inner_y = y - (l + dis) * i
#        square_line(x, inner_y, l, n, dis)

# def five_star(l):
#    t.fillcolor('yellow')
#    t.begin_fill()
#    for i in range(5):
#        t.forward(l)
#        t.right(144)
#    t.end_fill()
# colors = ['red', 'yellow', 'darkblue', 'green']

# def circle(x, y, r, color):
#    n = 36
#    angle = 360 / n
#    pi = 3.1415926
#    c = 2 * pi * r
#    l = c / n
#    start_x = x - l / 2
#    start_y = y + r
#    setpen(start_x, start_y)
#    t.pencolor(color)
#    t.fillcolor(color)
#    t.begin_fill()

#    for i in range(n):
#        t.forward(l)
#        t.right(angle)
#    t.end_fill()

# def five_star(l):
#    setpen(0, 0)
#    t.setheading(162)
#    t.forward(150)
#    t.setheading(0)
#    t.fillcolor('WhiteSmoke')
#    t.begin_fill()
#    t.hideturtle()
#    t.penup()

#    for i in range(5):
#        t.forward(l)
#        t.right(144)
#    t.end_fill()

# def sheild():
#    circle(0, 0, 300, 'red')
#    circle(0, 0, 250, 'white')
#    circle(0, 0, 200, 'red')
#    circle(0, 0, 150, 'darkblue')
#    five_star(284)

# sheild()
# t.done()
# import turtle as t

# t.bgcolor("black")
# t.speed(0)
# t.pensize(2)

# colors = ['red', 'orange', 'green', 'indigo', 'blue', 'yellow']

# a=0

# for i in range(36):
#     t.color(colors[i%6])
#     for i in range(6):
#         t.circle(10,180)
#         t.left(180)
#         t.circle(10,-180)
#         t.left(180)
#     t.penup()
#     t.setpos(0,0)
#     t.pendown()
#     a+=10
#     t.seth(a)
# t.done()
# import turtle as t

# a = [
#     [(-40, 120), (-70, 260), (-130, 230), (-170, 200), (-170, 100), (-160, 40), (-170, 10), (-150, -10), (-140, 10),
#      (-40, -20), (0, -20)],
#     [(0, -20), (40, -20), (140, 10), (150, -10), (170, 10), (160, 40), (170, 100), (170, 200), (130, 230), (70, 260),
#      (40, 120), (0, 120)]]
# b = [
#     [(-40, -30), (-50, -40), (-100, -46), (-130, -40), (-176, 0), (-186, -30), (-186, -40), (-120, -170), (-110, -210),
#      (-80, -230), (-64, -210), (0, -210)],
#     [(0, -210), (64, -210), (80, -230), (110, -210), (120, -170), (186, -40), (186, -30), (176, 0), (130, -40),
#      (100, -46), (50, -40), (40, -30), (0, -30)]]

# c = [
#     [(-60, -220), (-80, -240), (-110, -220), (-120, -250), (-90, -280), (-60, -260), (-30, -260), (-20, -250),
#            (0, -250)],
#           [(0, -250), (20, -250), (30, -260), (60, -260), (90, -280), (120, -250), (110, -220), (80, -240), (60, -220),
#            (0, -220)]]
# t.hideturtle()
# t.bgcolor('#ba161e')
# t.setup(500, 600)
# t.title("ironman")
# piece1Goto = (0, 120)
# piece2Goto = (0, -30)
# piece3Goto = (0, -220)
# t.speed(2)


# def draw_piece(piece, pieceGoto):
#     t.penup()
#     t.goto(pieceGoto)
#     t.pendown()
#     t.color('#fab104')
#     t.begin_fill()
#     for i in range(len(piece[0])):
#         x, y = piece[0][i]
#         t.goto(x, y)

#     for i in range(len(piece[1])):
#         x, y = piece[1][i]
#         t.goto(x, y)
#     t.end_fill()


# draw_piece(a, piece1Goto)
# draw_piece(b, piece2Goto)
# draw_piece(c, piece3Goto)
# t.hideturtle()
# t.done()
# import turtle as t

# t.color("#4285F4", "#4285F4")
# t.pensize(5)

# t.forward(120)
# t.right(90)
# t.circle(-150, 50)
# t.color("#0F9D58")
# t.circle(-150, 100)
# t.color("#F4B400")
# t.circle(-150, 60)
# t.color("#DB4437", "#DB4437")
# t.begin_fill()
# t.circle(-150, 100)
# t.right(90)
# t.forward(50)
# t.right(90)
# t.circle(100, 100)
# t.right(90)
# t.forward(50)
# t.end_fill()
# t.begin_fill()
# t.color("#F4B400", "#F4B400")
# t.right(180)
# t.forward(50)
# t.right(90)
# t.circle(100, 60)
# t.right(90)
# t.forward(50)
# t.right(90)
# t.circle(-150, 60)
# t.end_fill()
# t.right(90)
# t.forward(50)
# t.right(90)
# t.circle(100, 60)
# t.color("#0F9D58", "#0F9D58")
# t.begin_fill()
# t.circle(100, 100)
# t.right(90)
# t.forward(50)
# t.right(90)
# t.circle(-150, 100)
# t.right(90)
# t.forward(50)
# t.end_fill()
# t.right(90)
# t.circle(100, 100)
# t.color("#4285F4", "#4285F4")
# t.begin_fill()
# t.circle(100, 25)
# t.left(115)
# t.forward(65)
# t.right(90)
# t.forward(42)
# t.right(90)
# t.forward(124)
# t.right(90)
# t.circle(-150, 50)
# t.right(90)
# t.forward(50)
# t.end_fill()

# t.hideturtle()
# t.done()
# from turtle import *

# screensize(800, 600, "#fed926")
# setup(width=1000, height=1000, startx=50, starty=50)
# pensize(5)
# pencolor("black")
# speed(11)


# def leftEar():
#     setheading(30)
#     penup()
#     fillcolor("#1f1515")
#     goto(110, 150)
#     pendown()
#     setheading(30)
#     left(5)
#     circle(-410, 55)
#     penup()
#     goto(170, 100)
#     setheading(0)
#     pendown()
#     right(2)
#     circle(500, 39)
#     begin_fill()
#     left(124)
#     circle(400, 15)
#     left(-90)
#     circle(200, -27)
#     right(42)
#     circle(400, 20)
#     end_fill()
#     penup()


# def rightEar():
#     goto(-120, 180)
#     left(10)
#     pendown()
#     circle(400, 50)
#     left(118)
#     circle(400, 60)
#     penup()
#     goto(-75, 450)
#     left(-140)
#     pendown()
#     begin_fill()
#     circle(400, -13)
#     right(41)
#     circle(405, 17)
#     left(120)
#     circle(400, 10)
#     end_fill()
#     penup()


# def head():
#     goto(-130, 175)
#     right(32)
#     pendown()
#     circle(400, -37)
#     penup()
#     goto(181, 99)
#     left(125)
#     pendown()
#     right(180)
#     circle(400, -20)
#     left(165)
#     circle(200, 40)
#     left(190)
#     circle(400, -40)
#     circle(200, -40)
#     penup()
#     goto(-170, 160)
#     left(190)
#     pendown()
#     circle(150, 40)
#     right(180)
#     circle(180, -30)
#     left(170)
#     circle(50, 80)
#     circle(400, 20)
#     penup()
# def rightHand():
#     goto(-200, -130)
#     right(120)
#     pendown()
#     circle(200, 20)
#     circle(60, 120)
#     circle(400, 14)
#     penup()
#     goto(-170, -190)
#     pendown()
#     left(175)
#     circle(200, -30)
#     penup()


# def leftHand():
#     goto(130, -175)
#     pendown()
#     left(20)
#     circle(250, 64)
#     circle(10, 110)
#     circle(300, 40)
#     penup()


# def tummy():
#     goto(-210, -278)
#     left(80)
#     pendown()
#     circle(50, -10)
#     right(210)
#     circle(400, 20)
#     circle(50, 50)
#     circle(400, 5)
#     penup()
#     fillcolor("#ce7f38")
#     goto(206, -220)
#     right(120)
#     begin_fill()
#     circle(40, 40)
#     circle(5, 120)
#     right(20)
#     circle(40, 41)
#     end_fill()
#     goto(235, -350)
#     left(160)
#     begin_fill()
#     circle(50, 50)
#     circle(5, 120)
#     right(15)
#     circle(50, 45)
#     end_fill()


# def leftEye():
#     penup()
#     goto(80, 90)
#     left(180)
#     pendown()
#     goto(30, 60)
#     penup()
#     left(45)
#     fillcolor("#1c1c1b")
#     begin_fill()
#     circle(44, 295)
#     end_fill()
#     fillcolor("#f7ebfc")
#     goto(60, 65)
#     begin_fill()
#     circle(12, 360)
#     end_fill()


# def rightEye():
#     goto(-160, 100)
#     pendown()
#     goto(-105, 70)
#     penup()
#     goto(-107, 72)
#     fillcolor("#1c1c1b")
#     begin_fill()
#     right(110)
#     circle(100, -45)
#     circle(20, -95)
#     right(25)
#     circle(100, -43)
#     end_fill()
#     fillcolor("#f7ebfc")
#     goto(-150, 75)
#     begin_fill()
#     circle(12, 360)
#     end_fill()


# def leftBlush():
#     goto(75, -5)
#     pendown()
#     fillcolor("#f24a23")
#     begin_fill()
#     right(40)
#     circle(50, 360)
#     end_fill()
#     penup()


# def rightBlush():
#     goto(-215, 10)
#     right(35)
#     pendown()
#     begin_fill()
#     circle(50, -135)
#     right(62)
#     circle(50, -75)
#     goto(-217, 10)
#     end_fill()
#     penup()


# def nose():
#     goto(-90, 20)
#     pendown()
#     fillcolor("#2a0f00")
#     begin_fill()
#     right(48)
#     circle(30, -30)
#     right(90)
#     circle(30, -30)
#     right(80)
#     circle(30, -30)
#     end_fill()
#     penup()


# def mouth():
#     goto(-90, -30)
#     left(150)
#     pendown()
#     circle(30, -130)
#     penup()
#     goto(-90, -30)
#     pendown()
#     circle(100, 40)
#     circle(30, 110)


# if __name__ == '__main__':
#     leftEar()
#     rightEar()
#     head()
#     rightHand()
#     leftHand()
#     tummy()
#     leftEye()
#     rightEye()
#     leftBlush()
#     rightBlush()
#     nose()
#     mouth()
#     done()
# import os
# import sys
# import itertools
# import time


# def clear():
#     os.system("cls" if os.name == "nt" else "clear")


# with open("heli_animation.txt", encoding="utf-8") as f:
#     helicopter_phases = itertools.cycle(
#         [i.strip("\n") for i in filter(None, f.read().split("===================================="))]
#     )

# def print_heli():
#     try:
#         for heli_frame in helicopter_phases:
#             print(heli_frame)
#             time.sleep(float(sys.argv[1]) if sys.argv[1:] else 0.1)
#             clear()
#     except KeyboardInterrupt:
#         print("Stopped!")

# if __name__ == "__main__":
#     print_heli()
#     clear()


import math

print(math.log(16,2))