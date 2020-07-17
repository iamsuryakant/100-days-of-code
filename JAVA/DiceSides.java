public class DiceSides {
        public static int rollDice(int sides) {

            double randomNumber = Math.random();

            randomNumber = randomNumber * sides;

            randomNumber = randomNumber + 1;

            final int randomInt = (int) randomNumber;

            return randomInt;

        }

        public static void main(final String[] args) {
            final int roll1 = rollDice(4);
            final int roll2 = rollDice(3);
            System.out.println("Roll 1: " + roll1);
            System.out.println("Roll 2: " + roll2);

        }
    }