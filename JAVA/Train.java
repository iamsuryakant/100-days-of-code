class Train {
    int compartments;
    int maximumspeed;

    Train(int c, int s) {
        compartments = c;
        maximumspeed = s;
    }

    void show() {
        System.out.println("Train");
    }
}

class Express extends Train {
    private int passengers;
    private int tp;

    Express(int c, int s, int p) {
        super(c, s);
        passengers = p;
    }

    private void calP() {
        tp = compartments * passengers;
    }

    void show() {
        calP();
        System.out.println("total Passengers=" + tp);
    }

}

class Goods extends Train {
    private int load;
    private int tl;

    Goods(int c, int s, int p) {
        super(c, s);
        load = p;
    }

    private void call() {
        tl = compartments * load;
    }

    void show() {
        call();
        System.out.println("total load=" + tl + "kg");
    }

}

class Q1i {
    public static void main(String args[]) {

        Train t1, t2;
        t1 = new Express(40, 120, 50);
        t2 = new Goods(60, 100, 3005);
        t1.show();
        t2.show();
    }
}
