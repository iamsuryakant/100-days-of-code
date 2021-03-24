import java.util.Scanner;

public class test1 {
    public static void main(String args[]) {
        int n;

        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        String s = "";
        int t = n;
        while (t > 0) {
            s = s + (t % 10);
            t /= 10;

        }

        System.out.println(s);
        int j = s.length();
        for (int i = j - 1; i >= 0; i--) {
            char d = s.charAt(i);
            switch (d) {

            case '0':
                System.out.print(" " + "zero");
                break;
            case '1':
                System.out.print(" " + "one");
                break;
            case '2':
                System.out.print(" " + "two");
                break;
            case '3':
                System.out.print(" " + "three");
                break;
            case '4':
                System.out.print(" " + "four");
                break;
            case '5':
                System.out.print(" " + "five");
                break;
            case '6':
                System.out.print(" " + "six");
                break;
            case '7':
                System.out.print(" " + "seven");
                break;
            case '8':
                System.out.print(" " + "eight");
                break;
            case '9':
                System.out.print(" " + "nine");
                break;
            }
        }

    }

}
