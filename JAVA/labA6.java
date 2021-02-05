import java.util.Scanner;

abstract class TwoDShape {
    abstract double area();

    double dim1;
    double dim2;
}

class Rectangle extends TwoDShape {
    private double area;

    Rectangle(double length, double breadth) {
        dim1 = length;
        dim2 = breadth;
    }

    private void calArea() {
        area = dim1 * dim2;
    }

    public double area() {
        calArea();
        return area;
    }
}

class labA6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length");
        double length = sc.nextDouble();
        System.out.println("Enter the breadth");
        double breadth = sc.nextDouble();

        Rectangle obj = new Rectangle(length, breadth);

        System.out.println("The area of the rectangle is " + obj.area());

        sc.close();
    }
}