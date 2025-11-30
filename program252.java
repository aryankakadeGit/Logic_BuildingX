import java.util.*;
class StringX{
    public String Update(String str)
    {
        
        char Arr[]=str.toCharArray();
        
        Arr[0]='_';
        String Temp=new String(Arr);
        return Temp;
    }
}
class program252 {
    public static void main(String[] args) {
        String sRet=null;
        Scanner scanObj = new Scanner(System.in);
        System.out.println("Enter String : ");
        String sobj = scanObj.nextLine();
        char Arr[] = sobj.toCharArray();
        StringX strobj=new StringX();
        sRet=strobj.Update(sobj);
        System.out.println("Updated string is :"+sRet);

        
       
    }
}