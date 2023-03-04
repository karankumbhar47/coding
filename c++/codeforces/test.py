for i in range(1,100):
    if(i%3==0 and i%5==0):
        print("FB")
    elif(i%3!=0 and i%5==0):
        print("B")
    elif(i%3==0 and i%5!=0):
        print("F")