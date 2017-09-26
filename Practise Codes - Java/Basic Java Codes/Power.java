import java.util.Scanner;
class Calcpow{
    void pow(int a, int b ){
        int pow=1;
        for(int i=1;i<=b;i++){
        pow*=a;
       }
        System.out.println(pow);
    }
}
class Power{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        Calcpow obj = new Calcpow();
        int n1=scan.nextInt();
        int n2=scan.nextInt();
        obj.pow(n1,n2);
    }
      
}