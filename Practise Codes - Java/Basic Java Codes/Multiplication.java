import java.util.Scanner;
class Calcm{
    double multiply(double x,double y){
        return x*y;
    }
}
class Multiplication{
    public static void main(String[] args){
        Calcm mul = new Calcm();
        Scanner scan = new Scanner(System.in);
        double a = scan.nextDouble();
        double b = scan.nextDouble();
        double res = mul.multiply(a, b);
        System.out.println(res);
    }
}