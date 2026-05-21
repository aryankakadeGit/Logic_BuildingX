import java.util.*;
class program836 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo ,iTemp,iDigit ,iSum= 0;
        int iCount = 0;
        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();
        iTemp = iNo;
        while(iNo!=0)
        {
            iCount++;
            iNo/=10; 
        }
        iNo = iTemp;

        
        while(iNo!=0)
        {
            iDigit =iNo%10;
            iSum = iSum+((int)Math.pow(iDigit,iCount));
            iCount--;
            iNo/=10; 
        }
        
        if(iTemp == iSum)
        {
            System.out.println(iTemp+" is Disarium number ");
        }
        else
        {
            System.out.println(iTemp+" is not Disarium number ");
        }
        sobj.close();
    }
}