import java.util.*;
class ArrayX{
    public void Display(int Brr[])
    {
        int i =0;
        System.out.println("Elements of array are : ");
        for(i=0;i<Brr.length;i++)
        {
            System.out.println(Brr[i]);
        }
    }
    public int Summation(int Brr[])
    {
        int iSum=0;
        int i=0;
        for(i=0;i<Brr.length;i++)
        {
            iSum+=i;
        }
        return iSum;
    }
    public int CountEven(int Brr[])
    {
        int i =0;
        int iCount =0;
        for(i=0;i<Brr.length;i++)
        {
            if((Brr[i]%2)==0)
            {
                iCount++;
            }
        }
        return iCount;
    }
}
class program102 {
    public static void main(String A[]) {
        Scanner sobj = new Scanner(System.in);
        int iSize=0 , i=0 , iRet=0, iSumRet=0;

        System.out.println("ENter size of array: ");
        iSize=sobj.nextInt();
        
        int Arr[]=new int[iSize];
   
        System.out.println("ENter the elements  :");
        for(i=0 ; i<Arr.length ; i++)
        {
            Arr[i]=sobj.nextInt(); 
        }
       
        ArrayX aobj = new ArrayX();
        aobj.Display(Arr);
        iRet=aobj.CountEven(Arr);
        iSumRet=aobj.Summation(Arr);
        System.out.println("Even Elements are : "+iRet);
        System.out.println("Summatioon is : "+iSumRet);
        //important
        aobj=null;
        Arr=null;
        sobj=null;
        System.gc();

    }    
}
