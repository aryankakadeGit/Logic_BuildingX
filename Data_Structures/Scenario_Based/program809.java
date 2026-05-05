import java.util.*;

class program809 {

    public static void main(String A[]) {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter No of cities ");
        int N = sobj.nextInt();
        if (N <= 0) {
            System.out.println("Invalid Input");
            return;
        }
        int i, no, j = 0;
        int Arr[][] = new int[N][7];
        System.out.println("Enter COmsumption of each city");
        for (i = 0; i < N; i++) {
            System.out.println("Enter comsumption of city : " + (i + 1));
            for (j = 0; j < 7; j++) {
                no = sobj.nextInt();
                if (no < 0) {
                    System.out.println("Invalid Input");
                    return;
                }
                Arr[i][j] = no;
            }
        }
        int Weekly[] = new int[7];
        int HighestCity = 0;
        int MaxWeekly = 0;
        int PeakDay = 0;
        int MaxDayTotal = 0;
        int Sum = 0;

        // Weekly Total + Highest Consumption
        for (i = 0; i < N; i++) {
            for (j = 0; j < 7; j++) {
                Sum = Sum + Arr[i][j];
            }
            Weekly[i] = Sum;
            if (Sum > MaxWeekly) {
                MaxWeekly = Sum;
                HighestCity = i;
            }
        }
        System.out.println("Highest Consumption City : " + HighestCity);
        System.out.println("Highest Consumption : " + MaxWeekly);

        // Day with Maximum Consumption
        int DaySum = 0;
        int Day = 0;
        for (Day = 0; Day < 7; Day++) {
            DaySum = 0;
            for (i = 0; i < N; i++) {
                DaySum = DaySum + Arr[i][Day];
            }
            if (DaySum > MaxDayTotal) {
                MaxDayTotal = DaySum;
                PeakDay = Day;
            }
        }
        String DayName[]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
        System.out.println("Peak Consumption Day : " + DayName[PeakDay]);
        System.out.println("Weekly Consumption : ");
        for (i = 0; i < N; i++) 
        {
            System.out.println("City : " + i + 1 + ": " + Weekly[i]);
        }

        // Cities More than 500 Consumptions
        System.out.println("City More tham 500 Consumption : ");
        for (i = 0; i < N; i++) 
        {
            if (Weekly[i] > 500) 
            {
                System.out.println("City : "+(i+1));
            }
        }

        sobj.close();
    }
}
