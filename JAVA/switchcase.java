public class switchcase {
    public static void main(String[] args) {

        int passcode = 729;
        String coffeeType;
        switch (passcode) {
            case 555: coffeeType="Expresso";
                break;
            case 312: coffeeType="Vanilla";
                break;
            case 629: coffeeType="Dripcoffee";
                break;
        
            default: coffeeType = "unknown";
                break;
        }
        System.out.println(coffeeType);


        
    }
    
}