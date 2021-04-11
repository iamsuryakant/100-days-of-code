import java.io.*;

class remdp {

    static int rmdupli(int arr[]) {
        int n = arr.length;
        int res = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] != arr[res - 1]) {
                arr[res] = arr[i];
                res++;
            }

        }
        return res;

    }

    public static void main(String[] args) {

        int arr[] = new int[] { 1, 3, 3, 8, 9, 9 };
        int x = rmdupli(arr);

        // for(int i = 0; i<arr.length; i++)
        System.out.print(x);
    }
}

// This code is created by Suryakant Thakur.