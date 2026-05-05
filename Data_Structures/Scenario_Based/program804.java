import java.util.*;
class program804 {
    public static long fibonacci(int n) 
    {
        if(n<=1)
        {
            return n;
        }
        return (fibonacci(n-1) + fibonacci(n-2));
    }
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("ENter the number of element in series :");
        int size = sobj.nextInt();
        for(int i=1;i<=size;i++)
        {
            System.out.print(fibonacci(i) + " ");
        }
       
        sobj.close();
    }    
}
