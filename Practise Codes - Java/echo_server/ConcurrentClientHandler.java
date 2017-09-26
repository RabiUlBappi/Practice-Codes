package echo_server;

import java.net.*; 
import java.io.*; 

class ConcurrentClientHandler extends Thread{
    protected Socket clientSocket;
    protected int clientNo;
    ConcurrentClientHandler(Socket clientSocket, int clientNo){
        this.clientSocket = clientSocket;
        this.clientNo = clientNo;
    }
    
    public void run(){
        try{
            System.out.println("Starting session for client "+clientNo+" from address 127.0.0.1"+"\n");
            // Create data input and output streams
            PrintWriter out = new PrintWriter(clientSocket.getOutputStream(),true);    
            BufferedReader in = new BufferedReader(new InputStreamReader( clientSocket.getInputStream()));
            while(true){
                // Receive message from client
                String msg = in.readLine(); // read message
                
                // end loop 
                if (msg.equals("end-of-session")){ 
                    System.out.println("Ending session for client "+clientNo+"\n");
                    break;
                }

                // Send message back to the client
                out.println(msg); // write reply

                //update UI
                System.out.println("Received from client "+ clientNo +": "+ msg + "\n");
            }
        }catch(Exception e){}
    }
}