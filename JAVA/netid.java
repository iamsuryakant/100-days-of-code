public class netid {
   public static void checkClass(String i) {
        int ind = i.indexOf('.');
        String sub = i.substring(0, ind);
        int ip = Integer.parseInt(sub);
        String cl, netid;
        if (ip >= 1 && ip <= 126) {
            cl = "A";
            netid = sub;
        } else if (ip >= 128 && ip <= 191) {
            cl = "B";
            int index = -1;
            int dot = 2;
            for (int j = 0; j < i.length(); j++) {
                if (i.charAt(j) == '.') {
                    dot -= 1;
                    if (dot == 0) {
                        index = j;
                        break;
                    }
                }
            }
            netid = i.substring(0, index);
        }

        else if (ip >= 192 && ip < 223) {
            int index = -1;
            int dot = 3;
            for (int j = 0; j < i.length(); j++) {
                if (i.charAt(j) == '.') {
                    dot -= 1;
                    if (dot == 0) {
                        index = j;
                        break;
                    }
                }
            }
            cl = "C";
            netid = i.substring(0, index);
        } else if (ip >= 224 && ip <= 239) {
            cl = "D";
            netid = "(In this Class, IP address is not divided into Network )";
        }

        else {
            cl = "E";
            netid = "(In this Class, IP address is not divided into Network )";
        }

        System.out.println("Given IP address(" + i + ") belongs to Class " + cl + " & net id=" + netid);
    }

    public static void main(String[] args) {
        String ip1 = "192.168.100.14";
        String ip2 = "172.16.100.55";
        String ip3 = "10.56.42.5";
        checkClass(ip1);
        checkClass(ip2);
        checkClass(ip3);

    }
}
