import java.util.*;
import java.lang.Math;

class abc {
    long x, r, s = 0;
    int i, a = -2, b = 2, c = 31;

    abc(long x) {
        this.x = x;
    }

    void value() {
        if (x > 0) {
            for (i = 1; x > 0; i++) {
                r = x % 10;
                s = (s * 10) + r;
                x = x / 10;
            }
        } else {
            for (i = 1; x < 0; i++) {
                r = x % 10;
                s = (s * 10) + r;
                x = x / 10;
            }
        }

    }

    long check() {
        if (x >= (Math.pow(a, c)) && x <= (Math.pow(b, c) - 1)) {
            value();
            return s;

        } else {
            s = 0;
            return s;

        }
    }
}

class Main0 {
    public static void main(String snr[]) {
        long x;
        Scanner n = new Scanner(System.in);
        System.out.print("Input: x = ");
        x = n.nextLong();
        abc a = new abc(x);
        System.out.println("Output: " + a.check());
    }
}
