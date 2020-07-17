public class rollingDice {
    public static int rollDice() {

        double randomNumber = Math.random();

        randomNumber = randomNumber * 6;

        randomNumber = randomNumber + 1;

        final int randomInt = (int) randomNumber;

        return randomInt;

    }

    public static void main(final String[] args) {
        final int roll1 = rollDice();
            final int roll2= rollDice();
            System.out.println("Roll 1: " + roll1);
            System.out.println("Roll 2: " + roll2);

    }
}
