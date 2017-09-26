import java.util.*;
class Calcpow1{
    double pow(double a, int b ){
        double pow=1.0;
        for(int i=1;i<=b;i++){
        pow*=a;
       }
        return pow;
    }
}
class Cosx{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        Calcpow1 obj1 = new Calcpow1();
        int i,j,sign=-1;
        double x,cosx=1,fct;
        System.out.println("Enter the value of x(in degrees)\n");
        x=scan.nextDouble();
        x=x*(3.141593/180); /* Degrees to radians*/
        for(i=2;i<=1000;i+=2)
        {
            fct=1;
            for(j=1;j<=i;j++)
            {
                fct=fct*j;
            }
            cosx+=(obj1.pow(x,i)/fct)*sign;
            sign=sign*(-1);
        }
        System.out.println("Sum of the cosx series = "+cosx);
    }
      
}