import java.util.*;

class program830 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();
        int idigit = 0,iTemp = 0,iRev  = 0;
        iTemp = iNo;
        
        while (iNo != 0) {
            idigit = iNo % 10;
            iRev = (iRev * 10)+idigit;
            iNo = iNo / 10;
        }
        if(iTemp==iRev)
        {
            System.out.println(iTemp+" is an Palindrome number ");
        }
        else
        {
            System.out.println(iTemp+" is not an Palindrome number ");
        }
        sobj.close();
    }
}