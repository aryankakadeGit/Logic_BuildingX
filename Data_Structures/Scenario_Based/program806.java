import java.util.*;
class program806 {
    
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the number of element in series :");
        int size = sobj.nextInt();
        long dp[]=new long[size+1];
        dp[0] = 0;
        dp[1] = 1;
        
        int i = 0;
        for(i=2;i<size;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        for(i=0;i<size;i++)
        {
            System.out.print(dp[i]+" ");
        }

        System.out.println("");
        sobj.close();
    }    
}
