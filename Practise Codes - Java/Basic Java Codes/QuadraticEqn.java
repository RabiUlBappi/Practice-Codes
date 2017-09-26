package my;

class QuadraticEqn{
    public static void main(String args[]){
    double x1,x2;
    int a=1,b=3,c=-1,d;
    //System.out.println("Enter the value of a,b,c: ");
    //scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>=0)
    {
        double d1= Math.sqrt(d);
        x1=(-b+d1)/(2*a);
        {
             System.out.println(x1);
        }

         x2=(-b-d1)/(2*a);
         {
          System.out.println(x2);
         }

    }
  }
}