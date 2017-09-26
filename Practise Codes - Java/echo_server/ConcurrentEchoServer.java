package echo_server;

import java.net.*; 
public class ConcurrentEchoServer{  
    public ConcurrentEchoServer() {
        int clientNo=0;
        try {
            System.out.println("Welcome to CSE336 Concurrent Echo Server!\n");
            ServerSocket serverSocket = new ServerSocket(25000); 
            System.out.println("Echo Server is running on port 25000\n");
            
            while (true) {
                clientNo++;
                Socket clientSocket = serverSocket.accept(); 
                new ConcurrentClientHandler(clientSocket,clientNo).start(); 
            }
        } catch (Exception e) {} 
    }
}