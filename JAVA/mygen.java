//import java.io.*;

class MyGen<T> {
    T x;
    static int count;

    MyGen() {
        count++;
    }
}

public class mygen {

    public static void main(String[] args) {

        MyGen<Integer> m1 = new MyGen<>();
        MyGen<String> m2 = new MyGen<>();

        System.out.println(MyGen.count);
    }
    
}
