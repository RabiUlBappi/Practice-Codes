import java.util.Scanner;
class Calcgcd{
    void gcd(){
        int a,b,mod;
    Scanner scan = new Scanner(System.in);
        a=scan.nextInt();
        b=scan.nextInt();
    for(;;)
    {
        mod=a%b;
        if(mod==0)
            break;
        a=b;
        b=mod;
    }
    System.out.println(b);
    }
}
class Gcd{
    public static void main(String[] args){
                Calcgcd obj = new Calcgcd();
                obj.gcd();
    }
      
}