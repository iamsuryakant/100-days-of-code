import java.util.*;
import java.lang.Math;
import java.util.Scanner;

public class clockAngle {

   public static double calcAngle(Integer h, Integer m) {


        //validate input..
        if (h < 0 || m < 0 || h > 12 || m > 60)
            System.out.println("Wrong input");


        Double ang = (0.5)*(60*h - 11*m);

        ang = Math.min(360 - ang, ang);

        if(ang < 0)
            return Math.abs(ang);

        return ang;
    }


    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        Integer h = sc.nextInt();
        Integer m = sc.nextInt();

        System.out.println(calcAngle(h, m));
    }

}
