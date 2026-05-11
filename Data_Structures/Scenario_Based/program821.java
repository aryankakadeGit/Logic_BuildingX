import java.util.*;

class program821
{
    public static void main(String[] args) {
        Scanner sobj  =  new Scanner(System.in);
        int iNo=0;
        int x = 0;
        int y = 0;
        int ipow = 0;
        int i = 0;
        System.out.println("Enter the  base : ");
        x = sobj.nextInt();   
        System.out.println("Enter the exponent : ");
        y = sobj.nextInt();            
        
        // x = 5
        // y = 3
        for(i = 1,ipow=1;i<=y;i++)
        {
            ipow = ipow*x;
        }
        System.out.println(ipow);
        sobj.close();
    }
}