import java.util.Scanner;
class Power1{
    int pow(int n1,int a1){
        int i,pwr=1;
        for(i=1;1<n1;i++)
            pwr*=a1;
        return pwr;
    }
        
}
class Calcb2d{
    int B2D(){
        int bin,dec=0,i=0,rem;
        Scanner scan = new Scanner(System.in);
        Power1 powr = new Power1();
        bin = scan.nextInt();
        while(bin!=0)
    {
        rem=bin%10;
        int c=powr.pow(i,2);
        dec+=rem*c;
        bin/=10;
        i++;
    }
        return dec;
    
   }
}
class Bin2dec{
    public static void main(String[] args){
      Calcb2d obj = new Calcb2d();
        int res = obj.B2D();
        System.out.println(res);
    }
        
}