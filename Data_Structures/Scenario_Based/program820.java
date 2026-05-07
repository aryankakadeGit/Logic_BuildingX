import java.util.*;
class program820
{
    public static void main(String[] args) {
        Scanner sobj  =  new Scanner(System.in);
        int iNo=0;
        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();             
        int idigit = 0;
        int iCount = 0;
        while(iNo!=0) 
        {
            idigit = iNo % 10;
            iCount++;             
            iNo  = iNo/10;
        }
        System.out.println(iCount);
        sobj.close();
    }
}