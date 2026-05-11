import java.util.*;

class program828 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();
        int idigit = 0,iTemp = 0,iSum  = 0,iCountTemp = 0;
        iTemp = iNo;
        // no of digits
        while (iNo != 0) {
            idigit = iNo % 10;
            iSum = iSum + idigit;
            iNo = iNo / 10;
        }
        if((iTemp%iSum)==0)
        {
            System.out.println(iTemp+" is an HArshad number ");
        }
        else
        {
            System.out.println(iTemp+" is not an HArshad number ");
        }
        sobj.close();
    }
}