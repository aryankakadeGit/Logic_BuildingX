import java.util.*;

class program829 {
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
        System.out.println(iRev);
        
        sobj.close();
    }
}