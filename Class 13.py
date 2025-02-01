from cvzone.SerialModule import SerialObject
from time import sleep
from tkinter import *

arduino=SerialObject("COM3")

window=Tk()
window.title("LED Control Panel")
window.geometry("350x200")

def red_on():
    arduino.sendData([2, 0])

def red_off():
    arduino.sendData([3, 0])


def blue_on():
    arduino.sendData([1, 0])


def blue_off():
    arduino.sendData([0, 0])


btn_r1=Button(window,text="LED Red On",bg="red",fg="white",font=("cursive",13,"italic"),command=red_on)
btn_r1.place(x=25,y=20)
btn_r0=Button(window,text="LED Red Off",bg="red",fg="white",font=("cursive",13,"italic"),command=red_off)
btn_r0.place(x=25,y=90)

btn_b1=Button(window,text="LED Blue On",bg="blue",fg="white",font=("cursive",13,"italic"),command=blue_on)
btn_b1.place(x=150,y=20)
btn_b0=Button(window,text="LED Blue Off",bg="blue",fg="white",font=("cursive",13,"italic"),command=blue_off)
btn_b0.place(x=150,y=90)

window.mainloop()