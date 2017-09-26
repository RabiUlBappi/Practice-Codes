import java.util.Scanner;
class Calcd{
    double div(double x,double y){
        return x/y;
    }
}
class Division{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        double a = scan.nextDouble();
        double b = scan.nextDouble();
        Calcd div = new Calcd();
        double res = div.div(a, b);
        System.out.println(res);
    }
}