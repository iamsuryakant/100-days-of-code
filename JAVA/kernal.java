import java.util.*;
import java.io.*;
import java.lang.*;
import java.time.Year;
import java.util.regex.*;

public class kernal {

    private static final String S = null;

    public static boolean isvalidBatch(String BatchID){

        String regex = "[A-Z]{2}[0-9]{1}[A-Z]{1}[0-9]{8}";
        Pattern p = Pattern.compile(regex);

        if(BatchID == null)
        {
            return false;
        }
        Matcher m = p.matcher(BatchID);
        return m.matches();

    }

    public static void main(String args[]){
        String s;

        Scanner sc = new Scanner(System.in);
        s = sc.nextLine();

        if(s.length() < 12){
            System.out.println("Invalid Length");
        }

        /*int date, month , year;
        year = sc.nextInt();
        month = sc.nextInt();
        date = sc.nextInt();
        

        if(year < 2015 && year > 2020)
        {
            System.out.println("Invalid Year");
        }

        if(month < 1 && month > 12)
        {
            System.out.println("Invalid Month");
        }

        if(date < 1 && date > 31)
        {
            System.out.println("Invalid Date");
        }*/

        if(isvalidBatch(s)){
            for(int i = 0; i<4; i++)
            {
                char S =  s.charAt(i);
            }
            System.out.print("Batch Number:" + S);
            for(int i = 4; i<9; i++){
                System.out.print("Expiry Date:"+s.charAt(s.length()-1)+"/"+s.charAt(s.length()-3)+"/");
            }
        }
    }
}
