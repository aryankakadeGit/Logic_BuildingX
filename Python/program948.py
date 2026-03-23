def SumFactors(No):
    Sum = 0
    for i in range(1,(No//2)+1):
        if((No%i)==0):
            Sum=Sum+i
    return Sum
def main():
    Ret = 0
    Value=0
    print("Enter Number : ")
    Value=int(input())
    Ret=SumFactors(Value)
    print(Ret)
main()