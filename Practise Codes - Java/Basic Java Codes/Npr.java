import java.util.Scanner;
class CalcNpr{
    void npr(){
    Scanner scan = new Scanner(System.in);
    int n,r,i,fn=1,fnr=1;
    n = scan.nextInt();
    r = scan.nextInt();
    for(i=1;i<=n;i++)
         fn*=i;
    for(i=1;i<=(n-r);i++)
         fnr*=i;
    int nPr = fn/fnr;
    System.out.println(nPr);
    }
}
class Npr{
    public static void main(String[] args){
        CalcNpr obj = new CalcNpr();
        obj.npr();
        
    }
      
}