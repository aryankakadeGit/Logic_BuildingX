import java.util.*;
class program814{
    public static void main(String[] args) {
        Scanner sobj  =  new Scanner(System.in);
        int no = 0;
        int sum  = 0;
        int idigit = 0;
        System.out.println("Enter the number : ");
        no = sobj.nextInt();
        while(no!=0)
        {
            idigit = no % 10;
            
            no  = no/10;
        }
        
        
    }
}