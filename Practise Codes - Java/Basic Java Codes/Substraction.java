import java.util.Scanner;
class Calcs{
    double substract(double x,double y){
        return x-y;
    }
}
class Substraction{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        double a = scan.nextDouble();
        double b = scan.nextDouble();
        Calcs sub = new Calcs();
        double res = sub.substract(a, b);
        System.out.println(res);
    }
}
