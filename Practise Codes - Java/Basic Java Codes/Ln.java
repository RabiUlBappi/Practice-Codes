import java.util.*;
/*class CalcLnPow{
        double pow(double a,int b){
        int pw=1,j;
        for(j=1;j<b;j++)
            pw*=a;
        return pw;
    }
*/
class Ln{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        //CalcLnPow powr = new CalcLnPow();
        int i;
        double x,x1,lnx=0;
        System.out.println("Enter the value of x: ");
        x1=scan.nextDouble();
        if(x1<=0)
        System.out.println("\n\nMath ERROR\n\n");
        else
        {
            x=(x1-1)/(x1+1);
            for(i=1;i<=1000;i+=2){
            lnx+=2*Math.pow(x,i)/i;
            }
            System.out.println(lnx);
        }
    }
      
}