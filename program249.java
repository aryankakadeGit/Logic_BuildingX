import java.util.*;
class StringX{
    public int CountA(String str)
    {
        int iCnt = 0;
        int iCount=0;
        char Arr[]=str.toCharArray();
        for (iCnt = 0; iCnt < Arr.length; iCnt++) {
            if(Arr[iCnt]=='a')
            {
                iCount++;
            }
        }
        return iCount;
    }
}
class program249 {
    public static void main(String[] args) {
        int iRet=0;
        Scanner scanObj = new Scanner(System.in);
        System.out.println("Enter String : ");
        String sobj = scanObj.nextLine();
        char Arr[] = sobj.toCharArray();
        StringX stobj=new StringX();
        iRet=stobj.CountA(sobj);
        System.out.println("Count of A is "+iRet); 
    }
}