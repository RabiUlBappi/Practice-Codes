package echo_server;

import java.util.Scanner;

class EchoServerMain{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.println("Select one of the following options:\n");
        System.out.println("1 - Iterative Server");
        System.out.println("2 - Concurrent Server");
        System.out.println("3 - Exit\n");
        System.out.print("Option: ");
        int choice = scan.nextInt();
        System.out.println("\n");
        switch(choice){
            case 1:
                new IterativeEchoServer();
                break;
            case 2:
                new ConcurrentEchoServer();
                break;
            case 3:
                break;
        }
    }
}