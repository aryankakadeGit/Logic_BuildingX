import java.util.*;
class program802 {
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("ENter the number of element in series :");
        int index = sobj.nextInt();
        if(index<0)
        {
            return ;
        }
        int First =0;
        int Second = 0;
        int next = 0;
        int i = 0;
        for(i = 1,First =0,Second=1 ;i<=index;i++)
        {
            System.out.print(First+"  ");
            next = Second +First;
            First = Second;
            Second = next;
        }
    }    
}
