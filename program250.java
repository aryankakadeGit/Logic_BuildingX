import java.util.*;
class StringX{
    public int CountSmall(String str)
    {
        int iCnt = 0;
        int iCount=0;
        char Arr[]=str.toCharArray();
        for (iCnt = 0; iCnt < Arr.length; iCnt++) {
            if(Arr[iCnt]>='a'&&Arr[iCnt]<='z')
            {
                iCount++;
            }
        }
        return iCount;
    }
}
class program250 {
    public static void main(String[] args) {
        int iRet=0;
        Scanner scanObj = new Scanner(System.in);
        System.out.println("Enter String : ");
        String sobj = scanObj.nextLine();
        char Arr[] = sobj.toCharArray();
        StringX stobj=new StringX();
        iRet=stobj.CountSmall(sobj);
        System.out.println("Count of small is "+iRet); 
    }
}