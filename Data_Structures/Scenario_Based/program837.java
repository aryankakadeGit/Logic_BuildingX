import java.util.*;

class program831 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();
        int idigit = 0,iTemp = 0, iSum =0 , iSquare = 1,CubeEnd = 0,iCube=0;
        iTemp = iNo;
        iCube = iNo*iNo*iNo;
        
        
        idigit = iNo % 10;
        CubeEnd = iCube%10;
        
        if(idigit == CubeEnd)
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