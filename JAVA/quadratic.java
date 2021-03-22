import java.io.*;
import java.util.*;
import java.util.Scanner;
import java.lang.*;
public class quadratic {
    private static double x1,x2;
    public static void main(String args[]){
         Scanner sc = new Scanner(System.in);
         System.out.print("Enter the cofficient:");
         int a = sc.nextInt();
         int b = sc.nextInt();
         int c = sc.nextInt();
        
         double x1, x2;
         double d = b*b - 4*a*c;
         if(d >= 0)
         {
             x1 = (-b + Math.sqrt(d))/(2*a);
             x2 = (-b - Math.sqrt(d)) / (2 * a);
         }
         else{
             System.out.println("Enter the correct input");
         }

         System.out.println("Roots are:" +x1);
         


    }
}
