import java.util.*;
class program800
{
    public static void main(String[] args) {
        Scanner sobj = new Scanner(System.in);
        int Amount = 0 ;
        float FinalAmount = 0.0f ;
        float DiscountAmount = 0.0f ;
        String MembershipType = null;

        System.out.println("Enter Purchase Ammount :");
        Amount = sobj.nextInt();
        
        System.out.println("Enter Membership Type : (Premium/Regular)");
        MembershipType = sobj.next();

        if( (Amount<0) 
            ||
            (
                (MembershipType.equalsIgnoreCase("Premium")==false) 
                &&
                (MembershipType.equalsIgnoreCase("Regular")==false)
            )
          )
        {
            System.out.println("Invalid Input");
            return;
        }
        
        else if(Amount > 5000) //20%
        {
            DiscountAmount = ((float)Amount *0.2f);
        }
        else if(Amount > 2000) //10%
        {
            DiscountAmount = ((float)Amount *0.1f);

        }
        else// No discount
        {
            DiscountAmount = Amount;
        }
        FinalAmount = Amount-DiscountAmount;

        if((MembershipType.equalsIgnoreCase("Premium")))
        {
            DiscountAmount = DiscountAmount+(FinalAmount*0.05f);        
            FinalAmount = FinalAmount-DiscountAmount;
        }        

        System.out.println("Amount : "+Amount+
                           "\nFinal amount "+FinalAmount+
                           "\nTotal Discount "+DiscountAmount);

        sobj.close();
    }
}