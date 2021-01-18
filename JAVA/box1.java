import java.util.*;
import java.lang.Math;
import java.util.Scanner;

public class box1 {
    private double h, w, d;

    public box1() {
        System.out.println("Constructor with no parameters");
    }

    public box1(double h, double w, double d) {
        this.h = h;
        this.w = w;
        this.d = d;
    }

    public box1(double i) {
        this.h = i;
        this.w = i;
        this.d = i;
    }

    public double getSurfaceArea() {
        return 2 * ((h * w) + (h * d) + (w * d));
    }

    public boolean equals(box1 obj1) {
        if (h == obj1.h && w == obj1.w && d == obj1.d) {
            return true;
        } else
            return false;
    }
}

class Test {
    public static void main(String[] args) {
        /*Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length");
        double l = sc.nextDouble();

        System.out.println("Enter the breadth");
        double b = sc.nextDouble();
        System.out.println("Enter the height");
        double h = sc.nextDouble();*/

        box1 obj1 = new box1(2, 5, 8);
        box1 obj2 = new box1(10);

        System.out.println(obj1.getSurfaceArea());
        System.out.println(obj2.getSurfaceArea());

        System.out.println(obj1.equals(obj2));
        //sc.close();
    }
}

