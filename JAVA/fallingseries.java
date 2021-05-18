import java.util.*;
import java.lang.*;
import java.io.*;

public class fallingseries {

    public static boolean isfalling(int [] arr){

        for(int i = 0; i<arr.length; i++)
        {
            if(arr[i] > arr[i+1])
            {
                return true;
            }
            return false;
        }
        return false;
    }

    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
         int []arr = new int[n];

         for(int i = 0; i<n; i++)
         {
             arr[i] = sc.nextInt();
         }

         if(isfalling(arr)){
             for(int i = 0; i<arr.length; i++)
             {
                 System.out.print(arr[i] + " ");
             }
             System.out.print("are in the falling series");
         }
         else{
             for(int i = 0; i<arr.length; i++)
             {
                 System.out.print(arr[i]+ " ");
             }
             System.out.print("are not in the falling series");
         }

    }
    
}
