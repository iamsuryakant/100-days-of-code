import java.util.Scanner;

class Box {

    double length;
    double breadth;
    double height;

    double volume() {
        return length * breadth * height;
    }

    
    void setData(double l, double b, double h) {
        this.length = l;
        this.breadth = b;
        this.height = h;
    }
}

class Demo {
    public static void main(String args[]) {
        Box b1 = new Box();
        Box b2 = new Box();

        
        double volume;

        Scanner sc = new Scanner(System.in);

        double l = sc.nextDouble();
        double b = sc.nextDouble();
        double h = sc.nextDouble();

        

        double length = sc.nextDouble();
        double breadth = sc.nextDouble();
        double height = sc.nextDouble();

        
        b1.setData(l, b, h);
        b2.setData(length, breadth, height);
        volume = b1.volume();
        System.out.println("Volume of box1 is " + volume);
        volume = b2.volume();
        System.out.println("Volume of box2 is " + volume);

        if (b1.volume() > b2.volume()) {
            System.out.println("Box1 is bigger size");
        } else {
            System.out.println("Box2 is bigger size");
        }

}
}
