import java.util.*;
class Calcpow2{
    double pow(double a, int b ){
        double pow=1.0;
        for(int i=1;i<=b;i++){
        pow*=a;
       }
        return pow;
    }
}
class Sinx{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        Calcpow2 obj1 = new Calcpow2();
        int i,j,sign=-1;
        double x,x1,sinx,fct;
        System.out.println("Enter the value of x(in degrees)\n");
        x=scan.nextDouble();
        x1=x;
        x=x*(3.141593/180); /* Degrees to radians*/
        sinx=x;
        for(i=3;i<=1000;i+=2)
        {
            fct=1;
            for(j=1;j<=i;j++)
            {
                fct=fct*j;
            }
            sinx+=(obj1.pow(x,i)/fct)*sign;
            sign=sign*(-1);
        }
        System.out.println("sin("+x1+"°)= "+sinx);
    }
      
}