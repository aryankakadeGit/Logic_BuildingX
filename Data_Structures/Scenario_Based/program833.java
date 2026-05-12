import java.util.*;

class program833 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();
        int iSum = 0,iMul = 1,iDigit = 0,iTemp = 0;
        iMul = 1;
        iTemp = iNo;
        while (iNo != 0) {
            iDigit = iNo%10; 
            iSum +=iDigit; 
            iMul *=iDigit; 
            iNo = iNo / 10;
        }
        if(iSum==iMul)
        {
            System.out.println(iTemp+" is an Spy number ");
        }
        else
        {
            System.out.println(iTemp+" is not an Spy number ");
        }
        sobj.close();
    }
}