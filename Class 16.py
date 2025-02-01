from tkinter import *
from cvzone import SerialModule

arduino=SerialModule.SerialObject("COM3")

window=Tk()
window.title("Ultrasonic Sensor Data")
window.geometry("300x200")
lb1=Label(window, text="Distance:", font=("cursive",15))
lb2=Label(window, text="Duration:", font=("cursive",15))
lb1.place(x=50,y=50)
lb2.place(x=50,y=100)

def display():
    data=arduino.getData()

    if data:
        distance=data[0]
        duration=data[1]
        lb1.config(text=f"Distance: {distance}")
        lb2.config(text=f"Duration: {duration}")
        lb1.after(1000,display)

display()
window.mainloop()