import java.util.*;
class program292 
{
    public static void main(String[] args) 
    {
        int Arr[]={45,21,19,54,78};
        //this is for each loop 
        for(int no:Arr)
        {
            System.out.println(no);
        }
        Arrays.sort(Arr);
        System.out.println("Array after sorting :\n");
        for(int no:Arr)
        {
            System.out.println(no);
        }

    }
}
