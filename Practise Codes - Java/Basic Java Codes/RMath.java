import java.util.Scanner;
public class RMath{
        public static double add(double x,double y){
        return x+y;
}


    public static double sub(double x,double y){
        return x-y;
    }


    public static double mul(double x,double y){
        return x*y;
    }


    public static double div(double x,double y){
        return x/y;
    }


    public static double pow(double a, int b ){
        double pow=1;
        for(int i=1;i<=b;i++){
        pow*=a;
       }
        return pow;
    }



    public static double getInvpow(double a, int b ){
        double invpow=1;
        int c=b*(-1);
        for(int i=1;i<=c;i++){
        invpow*=a;
       }
        return 1/invpow;
    }


    public static int fact(int n){
    int i,fact_res=1;
    for(i=1;i<=n;i++)
         fact_res*=i;
    return fact_res;
    }


    public static int lcm(int a, int b){
        int n;
        /*int x,y,j,LCM;
        x=a;
        y=b;
        while(a!=b){
            if(a>b)
                a=a-b;
            else
                b=b-a; 
        }
        LCM=(x*y)/a;
        System.out.println(LCM);*/
        for(n=1;;n++){
        if(n%a==0&&n%b==0)
            break;
       }
    return n;
    }
    

    public static int gcd(int a,int b){
        int mod;
    for(;;){
        mod=a%b;
        if(mod==0)
            break;
        a=b;
        b=mod;
    }
    return b;
    }


    public static int npr(int n,int r){
    int i,fn=1,fnr=1;
    for(i=1;i<=n;i++)
         fn*=i;
    for(i=1;i<=(n-r);i++)
         fnr*=i;
    return fn/fnr;
    }


    public static int ncr(int n, int r){
    int i,fn=1,fr=1,fnr=1;
    for(i=1;i<=n;i++)
         fn*=i;
    for(i=1;i<=(n-r);i++)
         fnr*=i;
    for(i=1;i<=r;i++)
         fr*=i;
    return fn/(fr*fnr);
    }


      public static int b2d(int bin){
        int dec=0,i=0,rem;
        while(bin!=0)
    {
        rem=bin%10;
        double c=pow(2,i);
        dec+=rem*c;
        bin/=10;
        i++;
    }
        return dec;
    
   }


    public static int d2b(int dec){
        int mod,bin=0,i=1;
        while(dec!=0){
            mod=dec%2;
            bin+=mod*i;
            dec/=2;
            i*=10;
        }
        return bin;
    }


        public static double sin(double x){
        int i,j,sign=-1;
        double sinx,fct;
        x=x*(3.141593/180.0); /* Degrees to radians*/
        sinx=x;
        for(i=3;i<=2000;i+=2)
        {
            fct=1;
            for(j=1;j<=i;j++)
            {
                fct*=j;
            }
            sinx+=pow(x,i)/fct*sign;
            sign*=(-1);
        }
        return sinx;
    }


    public static double cos(double x){
        int i,j,sign=-1;
        double cosx=1,fct;
        x=x*(3.141593/180); /* Degrees to radians*/
        for(i=2;i<=2000;i+=2)
        {
            fct=1;
            for(j=1;j<=i;j++)
            {
                fct=fct*j;
            }
            cosx+=(pow(x,i)/fct)*sign;
            sign*=-1;
        }
        return cosx;
    }
      



    public static double ln(double x1){
        int i;
        double x,lnx=0;
        if(x1<=0)
        System.out.println("\n\nMath ERROR\n\n");
        else
        {
            x=(x1-1)/(x1+1);
            for(i=1;i<=2000;i+=2){
            lnx+=2*pow(x,i)/i;
            }
        }
        return lnx;
    }
      


    public static double ex(double x){
        int i,j;
        double fact,ex=1;
        for(i=1;i<=100;i++)
        {
            fact=1;
            for(j=1;j<=i;j++)
            {
                fact*=j;
            }
            ex+=(pow(x,i)/fact);
        }
        return ex;
    }
      


   public static  double rev(double i){
        return 1/i;
    }



     public static int o2d(int oct){
        int dec=0,i=0,rem;
        while(oct!=0)
    {
        rem=oct%10;
        double c=pow(8,i);
        dec+=rem*c;
        oct/=10;
        i++;
    }
        return dec;
    
   }



    public static  int d2o(int dec){
        int mod,oct=0,i=1;
        while(dec!=0){
            mod=dec%8;
            oct+=mod*i;
            dec/=8;
            i*=10;
        }
        return oct;
    }
    
    
    
    /*public static  int d2h(int dec){
    int i=0,j,l,m;
    String hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'},hex2[100];
    while(dec!=0)
    {
        m=dec%16;
        dec/=16;
        hex2[i]=hex[m];
        i++;
    }
    hex2[i]='\0';
    l=hex2.length;
    for(j=l-1;j>=0;j--)
        return hex2[j];
    }*/



}
