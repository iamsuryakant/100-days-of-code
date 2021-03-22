import java.util.Scanner;

class Dimensions {

    double length;
    double breadth;
    double height;

    double FloorArea() {
        return length * breadth ;
    }

    double wallArea()
    {
        return length*height;
    }

    
    void setData(double l, double b, double h) {
        this.length = l;
        this.breadth = b;
        this.height = h;
    }
}

class Demo {
    public static void main(String args[]) {
        Dimensions d1 = new Dimensions();
        Dimensions d2 = new Dimensions();

        
        double FloorArea;
        double wallArea;

        Scanner sc = new Scanner(System.in);

        double l = sc.nextDouble();
        double b = sc.nextDouble();
        double h = sc.nextDouble();

        
        d1.setData(l,b,h);
        d2.setData(l,b,h);
       // b2.setData(length, breadth, height);
        FloorArea = d1.FloorArea();
        System.out.println("Floor area is " + FloorArea);
        wallArea = d2.wallArea();
        System.out.println("wallArea is " + wallArea);
}
}
