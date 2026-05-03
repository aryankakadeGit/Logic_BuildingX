import java.util.*;
class program799
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int Units = 0;
        int AMount =0 ;
        System.out.println("Enter units : ");
        Units = sobj.nextInt();
        if(Units<0)
        {
            System.out.println("Invalid Inputs");
            return;
        }
        if(Units<=100)
        {
            AMount = Units*5;
        }
        else if(Units>100 && Units <=200)
        {
            AMount = 500 +((Units-100)*7);
        }
        else if(Units>200)
        {
            AMount = (500 + 700 + ((Units-200)*10));
        }
        
        System.out.println("Total units : "+Units+"\nAMount :"+AMount);
        sobj.close();

    }
}