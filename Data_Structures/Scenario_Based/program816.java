import java.util.*;
class program816{
    public static void main(String[] args) {
        Scanner sobj  =  new Scanner(System.in);
        int no = 0;
        int sum  = 0;
        int idigit = 0;
        System.out.println("Enter the number : ");
        no = sobj.nextInt();        
        int temp = no;
        int Fact = 0; 
        int i = 0;
        while(no!=0) 
        {
            idigit = no % 10;
            for(i = 1,Fact = 1;i<=idigit;i++)
            {
                Fact= Fact*i;
            }                    
            sum = sum+Fact;

            no  = no/10;
        }
        if(sum==temp)
        {
            System.out.println("Strong number");
        }
        else{
            System.out.println("Not a strong number");
        }
    }
}