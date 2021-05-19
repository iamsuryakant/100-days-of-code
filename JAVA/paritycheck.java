import java.util.*;

public class paritycheck {

    public static void main(String[] args) {
        String code = "";
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();

        char[] a = s.toCharArray();

        for (int j = 0; j < a.length; j++) {
            Integer val = Character.getNumericValue(a[j]);
            String temp = Integer.toBinaryString(val);

            int count = 0;
            for (int i = 0; i < temp.length(); i++) {
                if (temp.charAt(i) == '1') {
                    count++;
                }
            }
            if (count % 2 == 0) {
                temp = temp + " 0";
                System.out.println(temp);
            } else {
                temp = temp + " 1";
                System.out.println(temp);
            }
            temp = temp.replaceAll("\\s", "");
            code = code + temp + " ";
        }
        System.out.println(code);
    }

}
