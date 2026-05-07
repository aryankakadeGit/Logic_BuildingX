import java.util.*;

class program810 {

    public static void main(String A[]) {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter No of rows in Theatre :");
        int R = sobj.nextInt();
        System.out.println("Enter No of columns in Theatre :");
        int C = sobj.nextInt();
        if(R<=0 || C<=0)
        {
            System.out.println("Invalid Input");
            return;
        }
        int Seats[][] = new int [R][C];
        System.out.println("Enter Booking Details : (0/1) ");
        int i , j =0 ;
        for(i = 0;i<R;i++)
        {
            System.out.println("Enter Details for Row "+(i+1));
            for(j=0;j<C;j++)
            {
                Seats[i][j]=sobj.nextByte();
                if((Seats[i][j])!=0 && Seats[i][j]!=1)
                {
                    System.out.println("Invalid Input");
                    return;
                }
            }
        }

        int TotalBooked = 0;
        int MaxBookedInRow = 0;
        int RowBooked = 0;
        int RowWithMAx = 0;
        boolean FullRowExists = false;
        for(i = 0;i<R;i++)
        {
            RowBooked = 0;
            for(j=0;j<C;j++)
            {
                if(Seats[i][j]==1)
                {
                    TotalBooked++;
                }
            }
            RowBooked += Seats[i][j];
            if(RowBooked > MaxBookedInRow)
            {
                MaxBookedInRow=RowBooked;
                RowWithMAx = i;
            }
            if(RowBooked==C)
            {
                FullRowExists=true;
            }
        }
        System.out.println("Total Booked Seats : "+TotalBooked);
        System.out.println("Max Booking Row : "+(RowWithMAx+1));
        
        System.out.println(("FullRow Exists : ")+(FullRowExists ?"Yes":"No"));
          
        sobj.close();
    }
}