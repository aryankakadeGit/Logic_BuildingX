import java.util.*;
class program798
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int Marks[] = new int[5];
        int i = 0;
        int iSum = 0;
        boolean pass = true;
        boolean invalid = false;
        System.out.println("Enter Marks : ");
        for(i = 0 ; i <=4 ; i++)
        {
            Marks[i] = sobj.nextInt();
            if(Marks[i]<35)
            {
                pass = false;
            }
            if(Marks[i]<0 || Marks[i]>100)
            {
                invalid = true;
            }
            iSum = iSum +Marks[i];
        }
        if(invalid = true)
        {
            System.out.println("Invalid Marks");
            return ;
        }
        if(pass == false)
        {
            System.out.println("Result : Fail");
            return ;
        }
        float Average = ((float)iSum/(float)5.0);
        System.out.println("Average MArks : "+Average);

        if(Average>=75.0f)
        {
            System.out.println("Final Result : Distinction");
        }
        else if(Average>=60.0f)
        {
            System.out.println("Final Result : First class");
        }
        else if(Average>=50.0f)
        {
            System.out.println("Final Result : Second class");
        }
        else if(Average<50.0f)
        {
            System.out.println("Final Result : Pass");    
        }    
        sobj.close();
    }
}