import java.io.*;
class program76 {
    //not a good programming
    public static void main(String[] args) throws IOException
    {
        int iNo=0;
        int i=0;
        BufferedReader bobj = new BufferedReader( new  InputStreamReader (System.in));
        System.out.println("Enter Number : ");
        iNo=Integer.parseInt(bobj.readLine());
        for(i=1;i<=iNo/2;i++)
        {
            if( (iNo%i) == 0 )
            {
                System.out.println(i);
            }
        }
    }    
}
