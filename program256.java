import java.util.*;
class StringX{
    public String strToggleX(String str)
    {
        
        char Arr[]=str.toCharArray();
        int iCnt=0;
        for(iCnt=0;iCnt<str.length();iCnt++)
        {
            if(Arr[iCnt]>='A'&&Arr[iCnt]<='Z')
            {
                Arr[iCnt]=(char)(Arr[iCnt]+32);
            }
            else if (Arr[iCnt]>='a'&&Arr[iCnt]<='z')
            {
                Arr[iCnt]=(char)(Arr[iCnt]-32);
            }
        }
        return new String(Arr);
    }
}
class program256 
{
    public static void main(String[] args) {
        String sRet=null;
        Scanner scanObj = new Scanner(System.in);
        System.out.println("Enter String : ");
        String sobj = scanObj.nextLine();
        char Arr[] = sobj.toCharArray();
        StringX strobj=new StringX();
        sRet=strobj.strToggleX(sobj);
        System.out.println("Updated string is :"+sRet);  
    }
}   