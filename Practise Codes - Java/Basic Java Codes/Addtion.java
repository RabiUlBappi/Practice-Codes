import java.util.Scanner;
class CalcAdd{
    double add(double x,double y){
        return x+y;
    }
}
class Addtion{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        double a = scan.nextDouble();
        double b = scan.nextDouble();
        CalcAdd add = new CalcAdd();
        double sum = add.add(a, b);
        System.out.println(sum);
    }
}