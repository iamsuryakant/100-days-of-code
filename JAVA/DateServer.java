import java.net.*;
import java.io.*;
import java.util.*;

public class DateServer {
    public static void main(String args[]) throws Exception {
        ServerSocket sc = new ServerSocket(5217);

        while (true) {
            System.out.println("Waiting For Connection ...");
            Socket soc = sc.accept();
            DataOutputStream out = new DataOutputStream(soc.getOutputStream());
            out.writeBytes("Server Date" + (new Date()).toString() + "\n");
            out.close();
            soc.close();
            sc.close();
        }

    }
}
