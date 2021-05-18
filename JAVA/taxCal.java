import java.util.*;
import java.lang.*;

public class taxCal {

    public static double TaxCal(double amount){
        double tax = 0;

        if(amount <= 250000)
        {
            tax = 0;
        }
        else if (amount >250000 && amount <= 500000){
            tax = 0.05 * amount;
        }
        else if (amount > 500000 && amount <= 1000000 ){
            tax = 12500 + (0.2*(amount-500000));
        }
        
        else{
            tax = 112500 + (0.3*(amount - 1000000));
        }

        return tax;
    }

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        double amt = sc.nextDouble();

        System.out.println(TaxCal(amt));
    }

    
}
