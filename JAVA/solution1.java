import java.util.*;
import java.lang.Math;

class Solution {
    public int reverse(int x) {
        // edge case when number is between (-10,10)
        if (x < 10 && x > -10) {
            return x;
        }
        int sign = 1;
        if (x < 0) {
            sign = -1;
            x = Math.abs(x);
        }
        // taken long as the reversed value may exceed the integer limit
        long num = 0;
        // reversing of the number x
        while (x != 0) {
            int a = x % 10;
            num = num * 10 + a;
            x = x / 10;
        }
        // multiplying with the sign to get the actual sign in enetered value 'x'
        num = num * sign;
        if (num > Math.pow(2, 31) - 1) {
            return 0;
        }
        int neg = -1;
        if (num < neg * (Math.pow(2, 31))) {
            return 0;
        }
        return (int) (num);
    }
}

class Main0 {
    public static void main(String snr[]) {
        long x;
        Scanner n = new Scanner(System.in);
        System.out.print("Input: x = ");
        x = n.nextLong();
       // abc a = new reverse(x);
        //System.out.println("Output: " + a.reverse());
    }
}