import java.util.*;

class program827 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();
        int idigit = 0,iCount = 0,iTemp = 0,ipow = 0,iSum  = 0,iCountTemp = 0;
        ipow = 1;
        iTemp = iNo;
        // no of digits
        // while (iNo != 0) {
        //     idigit = iNo % 10;
        //     iCount++;
        //     iNo = iNo / 10;
        // }
        iCount = Integer.toString(iNo).length();
        iCountTemp = iCount;
        // y = iCount;
        while (iNo != 0) {
            idigit = iNo % 10;
            ipow = (int)Math.pow(idigit,iCount);
            iCount = iCountTemp;
            iSum = iSum+ipow;
            iNo = iNo / 10;
        }
        if(iSum == iTemp)
        {
            System.out.println(iTemp+" is an armstrong number ");
        }
        else
        {
            System.out.println(iTemp+" is not an armstrong number ");
        }
        sobj.close();
    }
}