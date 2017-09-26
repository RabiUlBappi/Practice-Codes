import java.util.*;

class Calculator{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter your choic: ");
        System.out.println("0. Exit");
        System.out.println("1. +\t\t"+"2. -\t\t"+"3. ×\t\t"+"4. ÷");
        System.out.println("5. Serieses");
        System.out.println("6. x^n\t\t"+"7. 1/x\t\t"+"8. x^-n\t\t"+"9. √\t\t"+"10. %\t\t"+"11. !");
        System.out.println("12. lcm\t\t"+"13. gcd\t\t"+"14. nPr\t\t"+"15. nCr");
        System.out.println();
        System.out.println("16. Number Convertion:\n");
        for(;;){
        int n= scan.nextInt();
        if(n==0)
            break;
        switch(n){
            case 1:
                double a = scan.nextDouble();
                double b = scan.nextDouble();
                System.out.println(RMath.add(a, b));
                break;
            case 2:
                double asub = scan.nextDouble();
                double bsub = scan.nextDouble();
                System.out.println(RMath.sub(asub,bsub));
                break;
            case 3:
                double amul = scan.nextDouble();
                double bmul = scan.nextDouble();
                System.out.println( RMath.mul(amul, bmul));
                break;
            case 4:
                double adiv = scan.nextDouble();
                double bdiv = scan.nextDouble();
                System.out.println(RMath.div(adiv, bdiv));
                break;
            case 5:
                System.out.println("1. e^x\t\t"+"2. ln\t\t"+"3. sin\t\t"+"4. cos\t\t"+"5. tan");
                System.out.println("6. log\t\t"+"7. sin¯¹\t"+"8. cos¯¹\t"+"9. tan¯¹");
                int ns=scan.nextInt();
                switch(ns){
                    case 1:
                        System.out.print("e^");
                        double aex=scan.nextDouble();
                        System.out.println("= "+RMath.ex(aex));
                        break;
                    case 2:
                        System.out.print("ln ");
                        double xln=scan.nextDouble();
                        System.out.println("= "+RMath.ln(xln));
                        break;
                    case 3:
                        System.out.print("sin ");
                        double asin=scan.nextDouble();
                        System.out.println("= "+RMath.sin(asin));
                        break;
                    case 4:
                        System.out.print("cos ");
                        double acos=scan.nextDouble();
                        System.out.println("= "+RMath.cos(acos));
                        break;
                    case 5:
                        System.out.print("tan ");
                        double xtan=scan.nextDouble();
                        double restan=RMath.sin(xtan)/RMath.cos(xtan);
                        if(restan>=0)
                        System.out.println("= "+restan);
                        else
                        System.out.println("Math ERROR");
                        break;
                    case 6:
                        System.out.print("log ");
                        double xlog=scan.nextDouble();
                        System.out.println("= "+RMath.ln(xlog)/RMath.ln(10));
                        break;
                    case 7:
                         
                        break;
                    case 8:
                        
                        break;
                    case 9:
                        
                        break;
                }
                break;
            case 6:
                double n1=scan.nextDouble();
                int n2=scan.nextInt();
                double res=RMath.pow(n1,n2);
                System.out.println(n1+"^"+n2+"="+res);
                break;
            case 7:
                double x=scan.nextDouble();
                System.out.println(RMath.rev(x));
                break;
            case 8:
                double ainvpow = scan.nextDouble();
                int binvpow = scan.nextInt();
                double resinv=RMath.getInvpow(ainvpow, binvpow);
                System.out.println(resinv);
                break;
            case 9:
                break;
            case 10:
                break;
            case 11:
                int nfact=scan.nextInt();
                System.out.println(RMath.fact(nfact));
                break;
            case 12:
                int n1lcm=scan.nextInt();
                int n2lcm=scan.nextInt();
                System.out.println(RMath.lcm(n1lcm,n2lcm));
                break;
            case 13:
                int n1gcd=scan.nextInt();
                int n2gcd=scan.nextInt();
                System.out.println(RMath.gcd(n1gcd,n2gcd));
                break;
            case 14:
                int nnpr,rnpr;
                nnpr=scan.nextInt();
                rnpr=scan.nextInt();
                System.out.println(RMath.ncr(nnpr,rnpr));
                break;
            case 15:
                int nncr,rncr;
                nncr=scan.nextInt();
                rncr=scan.nextInt();
                System.out.println(RMath.ncr(nncr,rncr));
                break;
            case 16:
                System.out.println("1. Dec to Bin\t\t"+"2. Bin to Dec");
                System.out.println("3. Dec to Oct\t\t"+"4. Oct to Dec");
                System.out.println("5. Dec to Hex\t\t"+"6. Hex to Dec");
                System.out.println("7. Bin to Oct\t\t"+"8. Oct to Bin");
                System.out.println("9. Bin to Hex\t\t"+"10. Hex to Bin");
                System.out.println("11. Oct to Hex\t\t"+"12. Hex to Oct");
                int i=scan.nextInt();
                switch(i){
                    case 1:
                        int d2bv=scan.nextInt();
                        System.out.println(RMath.d2b(d2bv));
                        break;
                    case 2:
                        int b2dv=scan.nextInt();
                        System.out.println(RMath.b2d(b2dv));
                        break;
                    case 3:
                        int d2ov=scan.nextInt();
                        System.out.println(RMath.d2o(d2ov));
                        break;
                    case 4:
                        int o2dv=scan.nextInt();
                        System.out.println(RMath.o2d(o2dv));
                        break;
                    case 5:
                        break;
                    case 6:
                        break;
                    case 7:
                        int b2ov2=scan.nextInt();
                        System.out.println(RMath.d2o(RMath.b2d(b2ov2)));
                        break;
                    case 8:
                        int o2bv2=scan.nextInt();
                        System.out.println(RMath.d2b(RMath.o2d(o2bv2)));
                        break;
                }
                break;
            default: break;
                
        }
        System.out.println();
        
    }
  }
      
}