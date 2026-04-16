class demo
{
    public int factorial(int no)
    {
        if(no == 0)
        {
            return 1;
        }
        return no*factorial(no-1);
    }
}
class program998
{
    public static void main(String A[]) 
    {
        demo dobj = new demo();
        int iRet = 0;
        iRet = dobj.factorial(5);
        System.out.println("Factorial is : "+iRet);
    }
}