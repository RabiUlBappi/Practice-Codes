package echo_server;

import java.net.*;
import java.io.*;

class IterativeEchoServer{
    IterativeEchoServer(){
        try{
            System.out.println("Welcome to CSE336 Iterative Echo Server!\n");
            // Create a server socket 
            ServerSocket serverSocket = new ServerSocket(25000); // Server socket
            System.out.println("Echo Server is running on port 25000\n");

            // Listen for a connection request
            Socket clientSocket = serverSocket.accept(); // Connect client 

            // Create data input and output streams
            PrintWriter out = new PrintWriter(clientSocket.getOutputStream(),true);    
            BufferedReader in = new BufferedReader(new InputStreamReader( clientSocket.getInputStream()));

            while(true){
                // Receive message from the client
                String msg = in.readLine(); // read message
                
                // end loop 
                if (msg.equals("end-of-session")){
                    //out.println("Goodbye!");
                    break;
                }

                // Send message back to the client
                out.println(msg); // write reply

                //update UI
                System.out.println("Received: "+ msg + "\n");
            }
        }
        catch(IOException ex){
            ex.printStackTrace();
        }
    }
}