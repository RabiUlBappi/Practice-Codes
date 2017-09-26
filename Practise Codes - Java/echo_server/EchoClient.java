package echo_server;

import java.util.Scanner;
import java.net.*;
import java.io.*;

class EchoClient{
    
    public static void main(String[] args)  throws IOException {
        
        Scanner scan = new Scanner(System.in);
        String serverName;
        int serverPort;
        Socket clientSocket = null;
        PrintWriter out = null;
        BufferedReader in = null;
    
        System.out.println("Welcome to CSE336 Echo Client!\n");
        System.out.print("Please enter the server name: ");
        serverName = scan.nextLine();
        System.out.println("\n");
        System.out.print("Please enter the server port: ");
        serverPort = scan.nextInt();
        System.out.println("\n");
        
        try{
            clientSocket = new Socket(serverName, serverPort);             
            out = new PrintWriter(clientSocket.getOutputStream(), true);             
            in = new BufferedReader(new InputStreamReader(clientSocket.getInputStream()));    
        }catch (UnknownHostException e) { 
            System.err.println("Don't know about host: " + serverName); 
            System.exit(1); 
        } catch (IOException e) { 
            System.err.println("Couldn't get I/O for the connection to: " + serverName); 
            System.exit(1); 
        }
        
        BufferedReader stdIn = new BufferedReader( new InputStreamReader(System.in));
        String userInput;
        System.out.print("Please enter text (\"end-of-session\" to quit): ");
        while ((userInput = stdIn.readLine())!=null) {
            System.out.println("");
            out.println(userInput);
            // end loop 
            if (userInput.equals("end-of-session")){
                System.out.println("Goodbye!\n");
                break;
            }
            System.out.println("Server response: " + in.readLine() + "\n");
            System.out.print("Please enter text: ");
        }
        out.close();
        in.close();
        clientSocket.close(); 
    }
}