import java.util.*;
class program815{
    public static void main(String[] args) {
        Scanner sobj  =  new Scanner(System.in);
        int no = 0;
        int sum  = 0;
        int idigit = 0;
        System.out.println("Enter the number : ");
        no = sobj.nextInt();
        
            for(int i = 1;i<no;i++) 
            {
                if((no%i)==0)
                {
                    sum = sum+i;
                }
            }
        
        
            System.out.println(sum);
        
        
    }
}