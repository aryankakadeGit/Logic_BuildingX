import java.util.*;
class StringX{
    public String Update(String str)
    {
        
        char Arr[]=str.toCharArray();
        
        Arr[0]='_';
        return new String(Arr);//change
    }
}
class program254 
{
    public static void main(String[] args) {
       
        Scanner scanObj = new Scanner(System.in);
        System.out.println("Enter String : ");
        String sobj = scanObj.nextLine();
        char Arr[] = sobj.toCharArray();
        StringX strobj=new StringX();
        sobj=strobj.Update(sobj);//change but not preferable
        System.out.println("Updated string is :"+sobj);  
    }
}