import java.util.*;
class program797 
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int CurrentBalance = 0;
        int WithdrawalAmount = 0;
        int RemainingAmount = 0;
        System.out.println("Enter Current Balance: ");
        CurrentBalance = sobj.nextInt();
        System.out.println("Required Withdrawal Amount : ");
        WithdrawalAmount = sobj.nextInt();
        if (CurrentBalance < 0 || WithdrawalAmount <= 0) 
        {
            System.out.println("Invalid Input");
            return;
        }
        if ((WithdrawalAmount % 100) != 0) 
        {
            System.out.println("Transaction Failed :Withdrawal Amount must be in multiple in 100s");
        }
        else if (WithdrawalAmount > 25000) 
        {
            System.out.println("Transaction Failed :Withdrawal Amount must be in less than 25000");
        } 
        else if (CurrentBalance - WithdrawalAmount < 1000) 
        {
            System.out.println("Transaction Failed :After Withdrawal Balance must Remain at least 1000");
        } else {
            System.out.println("Transaction Succesful .\n Remaining Amount : " + (CurrentBalance - WithdrawalAmount));
        }
    }
}