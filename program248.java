import java.util.*;
class StringX{
    public void Display(String str)
    {
        int iCnt = 0;
        char Arr[]=str.toCharArray();
        for (iCnt = 0; iCnt < Arr.length; iCnt++) {
            System.out.println(Arr[iCnt]);
        }
    }
}
class program248 {
    public static void main(String[] args) {
        Scanner scanObj = new Scanner(System.in);
        System.out.println("Enter String : ");
        String sobj = scanObj.nextLine();
        char Arr[] = sobj.toCharArray();
        StringX stobj=new StringX();
        stobj.Display(sobj);
        
        
    }
}