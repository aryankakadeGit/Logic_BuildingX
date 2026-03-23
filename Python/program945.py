def CheckEven(No):
    if(No%2==0):
        return True
def main():
    Value=0
    print("Enter Number : ")
    Value=int(input())
    bRet = True
    bRet = CheckEven(Value)
    if(bRet == True):
        print("Number is even")
    else:
        print("Number is odd")
main()