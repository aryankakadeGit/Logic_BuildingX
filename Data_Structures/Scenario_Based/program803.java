import java.util.*;
class program803 {
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("ENter the number of element in series :");
        int index = sobj.nextInt();
        if(index<0)
        {
            sobj.close();
            return ;
        }
        long First =0;
        long Second = 0;
        long next = 0;
        int i = 0;
        for(i = 1,First =0,Second=1 ;i<=index;i++)
        {
            System.out.print(First+"  ");
            next = Second +First;
            First = Second;
            Second = next;
        }
        sobj.close();
    }    
}
