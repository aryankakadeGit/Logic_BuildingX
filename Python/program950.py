def DisplayDigits(No):
    iSum = 0
    iDigit = 0
    while(No!=0):
        iDigit = No%10
        #iSum = iSum +iDigit
        print(iDigit)
        No=No/10 #iissue
        
def main():
    No = 0
    print("Enter Number : ")
    No = int(input())
    DisplayDigits(No)
    
main()