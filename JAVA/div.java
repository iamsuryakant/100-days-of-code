import java.util.*;
import java.util.Scanner;
import java.lang.*;

public class div{

    public static int divide(int num, int den){

        int sign = ((num < 0) ^ (den < 0)) ? -1 : 1;

        int res = 0;
        
        num = Math.abs(num);
        den = Math.abs(den);

        while(num >= den){

            num -= den;
            ++res;
        }
        return sign*res;

    }  

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int dividend = sc.nextInt();
        int divisor = sc.nextInt();

        System.out.println(divide(dividend, divisor));
    }
}