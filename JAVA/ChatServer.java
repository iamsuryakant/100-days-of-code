import java.io.BufferedReader;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.net.ServerSocket;
import java.net.Socket;

public class ChatServer {

	public static void main(String[] args) {
		DataInputStream din = null;
		ServerSocket serverSocket = null;
		DataOutputStream dout = null;
		BufferedReader br = null;
		try {
			
			serverSocket = new ServerSocket(6666);
			System.out.println("Server is Waiting for client request... ");

			
			Socket socket = serverSocket.accept();
			din = new DataInputStream(socket.getInputStream());

			OutputStream outputStream = socket.getOutputStream();
			dout = new DataOutputStream(outputStream);

			br = new BufferedReader(new InputStreamReader(System.in));

			String strFromClient = "", strToClient = "";
			while (!strFromClient.equals("stop")) {
				strFromClient = din.readUTF();
				System.out.println("client says: " + strFromClient);
				strToClient = br.readLine();
				dout.writeUTF(strToClient);
				dout.flush();
			}
		} catch (Exception exe) {
			exe.printStackTrace();
		} finally {
			try {
				if (br != null) {
					br.close();
				}

				if (din != null) {
					din.close();
				}

				if (dout != null) {
					dout.close();
				}
				if (serverSocket != null) {
					
					serverSocket.close();
				}
			} catch (IOException e) {
				e.printStackTrace();
			}
		}

	}

}
