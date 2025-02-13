import firebase_admin
from firebase_admin import credentials,db
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

cred = credentials.Certificate("FirebaseData.json")
firebase_admin.initialize_app(cred,{"databaseURL":"https://robotics-class-17-default-rtdb.firebaseio.com/"})

# database=db.reference("/Sensor")
# data=database.get()

# print(data["Sensor"])
# print(data)

# database.update({"Sensor3":21,"Sensor2":432})

def display():
    data=arduino.getData()
    database = db.reference()
    if data:
        distance=data[0]
        duration=data[1]
        database.update({"Distance":distance,"Duration":duration})
        lb1.config(text=f"Distance: {distance}")
        lb2.config(text=f"Duration: {duration}")
        lb1.after(1000,display)

display()
window.mainloop()