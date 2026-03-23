def CheckPerfect(No):
    Sum = 0
    for i in range(1,(No//2)+1):
        if((No%i)==0):
            Sum=Sum+i
    return (Sum==No)

def main():
    Ret = False
    Value=0
    print("Enter Number : ")
    Value=int(input())
    Ret=CheckPerfect(Value)
    if(Ret==True):
        print("Number is a perfect number")
    else:
        print("Number is not a perfect number")
main()