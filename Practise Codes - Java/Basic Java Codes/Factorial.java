import java.util.Scanner;
class CalcFactorial{
    void fact(){
    Scanner scan = new Scanner(System.in);
    int i,n,fact_res=1;
    n = scan.nextInt();
    for(i=1;i<=n;i++)
         fact_res*=i;
    System.out.println(fact_res);
    }
}
class Factorial{
    public static void main(String[] args){
        CalcFactorial obj = new CalcFactorial();
        obj.fact();  
    }
    
}