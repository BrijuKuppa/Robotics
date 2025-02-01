from cvzone import SerialModule
from tkinter import *

window=Tk()
window.title("LDR Values")
window.geometry("300x300")
arduino=SerialModule.SerialObject("COM3")
lb1=Label(window, text="LDR Data:", font=("ariel", 15))
lb1.place(x=20, y=50)

def dv():
    r_data=arduino.getData()
    print(r_data)

    if r_data:
        l_data=r_data[0]

        if int(l_data)>2:
            window.config(bg="red")

        else:
            window.config(bg="yellow")

        lb1.config(text=f"LDR Data: {l_data}")

    lb1.after(500, dv)

dv()

window.mainloop()