import java.util.Scanner;
class Calcd2b{
    int D2B(){
        int dec,mod,bin=0,i=1;
        Scanner scan = new Scanner(System.in);
        dec = scan.nextInt();
        while(dec!=0){
            mod=dec%2;
            bin+=mod*i;
            dec/=2;
            i*=10;
        }
        return bin;
    }
}
class Dec2bin{
    public static void main(String[] args){
        Calcd2b bin = new Calcd2b();
        int res = bin.D2B();
        System.out.println(res);
   }
}