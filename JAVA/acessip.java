import java.io.*;
import java.net.*;

public class acessip {
    public static void main(String args[]) throws UnknownHostException {
        InetAddress add = InetAddress.getLocalHost();
        System.out.println("Local Host Name: " + add.getHostName());
        System.out.println("Local IP Address: " + add.getHostAddress());
        System.out.println("Hash code of Local IP :" + add.hashCode());

        InetAddress ip = InetAddress.getByName("www.google.com");
        System.out.println("Host Name: " + ip.getHostName());
        System.out.println("IP Address: " + ip.getHostAddress());
        System.out.println("toString: " + ip.toString());
        System.out.println("CanonicalHostName: " + ip.getCanonicalHostName());
        System.out.println("isAnyLocalAddress : " + add.isAnyLocalAddress());
        System.out.println("isMCGlobal : " + ip.isMCGlobal());
    }
    
}
