import java.util.*;
class program835 {
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int iNo ,iTemp= 0;
        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();
        iNo++;

        int ans = (int)Math.sqrt(iNo);
        
        if(iNo == (ans*ans))
        {
            System.out.println((iNo-1)+" is an Sunny number ");
        }
        else
        {
            System.out.println((iNo-1)+" is not an Sunny number ");
        }
        sobj.close();
    }
}