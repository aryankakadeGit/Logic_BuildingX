import java.util.*;
class StringX{
    public String TolowerCaseX(String str)
    {
        
        char Arr[]=str.toCharArray();
        int iCnt=0;
        for(iCnt=0;iCnt<str.length();iCnt++)
        {
            if(Arr[iCnt]>='A'&&Arr[iCnt]<='Z')
            {
                Arr[iCnt]=(char)(Arr[iCnt]+32);
            }
        }
        return new String(Arr);
    }
}
class program255 
{
    public static void main(String[] args) {
        String sRet=null;
        Scanner scanObj = new Scanner(System.in);
        System.out.println("Enter String : ");
        String sobj = scanObj.nextLine();
        char Arr[] = sobj.toCharArray();
        StringX strobj=new StringX();
        sRet=strobj.TolowerCaseX(sobj);
        System.out.println("Updated string is :"+sRet);  
    }
}   