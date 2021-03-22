class prime {

    static boolean primeCheck(int n) {
        if (n == 1 || n == 0)
            return false;

        for (int i = 2; i <= (int) (Math.sqrt(n)); i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    static int[] setArray() {
        int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        return a;
    }

    static void testPrime() {
        int a[] = setArray();
        for (int i = 0; i < a.length; i++) {
            if (primeCheck(a[i]))
                System.out.println("The number " + a[i] + " is prime");
        }
    }

    public static void main(String args[]) {
        prime.testPrime();
    }

}
    

