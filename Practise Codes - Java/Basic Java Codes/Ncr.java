import java.util.Scanner;
class CalcNcr{
    void ncr(){
    Scanner scan = new Scanner(System.in);
    int n,r,i,fn=1,fr=1,fnr=1;
    n = scan.nextInt();
    r = scan.nextInt();
    for(i=1;i<=n;i++)
         fn*=i;
    for(i=1;i<=(n-r);i++)
         fnr*=i;
    for(i=1;i<=r;i++)
         fr*=i;
    int nCr = fn/(fr*fnr);
    System.out.println(nCr);
    }
}
class Ncr{
    public static void main(String[] args){
        CalcNcr obj = new CalcNcr();
        obj.ncr();
    }
}