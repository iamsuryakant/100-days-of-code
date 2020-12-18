import java.util.Scanner;

class displayName {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter name:");
        String a = s.next();
        System.out.println("Enter roll number:");
        int b = s.nextInt();
        System.out.println("Enter Filed of interest:");
        s.nextLine();
        String c = s.nextLine();
        System.out.println("Hey, my name is " + a + " and my roll number is " + b + ". My field of interest are " + c + ".");
    }
}