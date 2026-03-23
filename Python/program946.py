def DisplayFactor(No):
    for i in range(1,No+1):
        if((No%i)==0):
            print(i)
def main():
    Value=0
    print("Enter Number : ")
    Value=int(input())
    DisplayFactor(Value)
    
main()