import java.util.*;
/*class CalcPow{
    double pow(double a,int b){
        int pw=1,j;
        for(j=1;j<b;j++)
            pw*=a;
        return pw;
    }
}*/
class Ex{
    public static void main(String[] args){
        int i,j;
        double x,fact,ex=1;
        System.out.println("Enter the value of x: ");
        Scanner scan = new Scanner(System.in);
        //CalcPow powr = new CalcPow();
        x=scan.nextDouble();
        for(i=1;i<=100;i++)
        {
            fact=1;
            for(j=1;j<=i;j++)
            {
                fact=fact*j;
            }
            ex+=(Math.pow(x,i)/fact);
        }
        System.out.println(ex);
    }
      
}