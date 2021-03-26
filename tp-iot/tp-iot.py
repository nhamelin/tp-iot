import serial,time

if __name__ == '__main__':
    
    print('Running. Press CTRL-C to exit.')
    with serial.Serial("COM9", 9600, timeout=1) as arduino: #COM9 peut être à modifier en fonction du port série utilisé
        time.sleep(0.1)
        if arduino.isOpen():
            print("{} connected!".format(arduino.port))
            try:
                while True:
                    while arduino.inWaiting()==0: pass
                    if  arduino.inWaiting()>0: 
                        answer=arduino.readline()
                        print(answer)
                        arduino.flushInput()
            except KeyboardInterrupt:
                print("KeyboardInterrupt has been caught.")