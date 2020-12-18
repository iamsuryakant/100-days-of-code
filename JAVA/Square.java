import java.util.*;
class Square
{
    public static void main(String args[])
    {
        
        Scanner sc=new Scanner(System.in);
        int r;
        int i=1;
        System.out.println("Square Root");
        while(i!=0){
            
        System.out.println("Input:");
        r=sc.nextInt();
        System.out.println("Output:"+r*r);
        System.out.println("want to terminate? enter 0");
        i=sc.nextInt();
        }

       
    }
}