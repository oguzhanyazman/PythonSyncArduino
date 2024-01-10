import serial
import time


ser = serial.Serial('COM7', 9600, timeout=1)


def send_command(command):
    ser.write(command.encode())
    time.sleep(0.1)


try:
    while True:
        user_input = input("Komut girin  ")

        if user_input == "quit":
            break

        send_command(user_input)

except KeyboardInterrupt:
    pass

finally:
    ser.close()
