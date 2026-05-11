import java.util.*;

class program822
{
    public static void main(String[] args) {
        Scanner sobj  =  new Scanner(System.in);
        int x = 0;
        int y = 0;
        int ipow = 0;
        System.out.println("Enter the  base : ");
        x = sobj.nextInt();   
        System.out.println("Enter the exponent : ");
        y = sobj.nextInt();            
        
        // x = 5
        // y = 3
        ipow=1;
        while(y!=0)
        {
            ipow = ipow*x;
            y--;
        }
        System.out.println(ipow);
        sobj.close();
    }
}