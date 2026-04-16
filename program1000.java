class demo
{
    public void Display(int no)
    {
        if(no == 0)
        {
            return;
        }
        System.out.println(no);
        Display(no-1);        
        System.out.println(no);

    }
}
class program1000
{
    public static void main(String A[]) 
    {
        demo dobj = new demo();
        dobj.Display(5);
    }
}