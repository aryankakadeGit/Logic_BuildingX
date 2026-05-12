import java.util.*;

class program831 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();
        int idigit = 0,iTemp = 0,iRev  = 0 , iSum =0 , iSquare = 1,iSquareend = 0;
        iTemp = iNo;
        iSquare = iNo*iNo;
        
        
        idigit = iNo % 10;
        iSquareend = iSquare%10;
        
        if(idigit == iSquareend)
        {
            System.out.println(iTemp+" is Atomorphic number");
        }
        else
        {
            System.out.println(iTemp+" is not a Atomorphic number");
        }
        
        
        sobj.close();
    }
}