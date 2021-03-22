import java.math.*;
import java.io.*;
import java.util.*;

class Complex {
    int real, imag;

    void print() {
        System.out.println(real + " +i" + imag);
    }

    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    void add(Complex C) {
        real += C.real;
        imag += C.imag;
    }
}

public class ques {
    public static void main(String[] args) throws IOException {

        Complex c1 = new Complex(10, 20);

        c1.print();

        Complex c2 = new Complex(20, 30);

        c1.add(c2);

        c1.print();

    }
}
