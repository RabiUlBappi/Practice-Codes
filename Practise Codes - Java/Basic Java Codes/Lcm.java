import java.util.Scanner;
class Calclcm{
    void lcm(int a, int b){
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
        for(n=1;;n++)
    {
        if(n%a==0&&n%b==0)
            break;
    }
    System.out.println(n);
    }
    
}
class Lcm{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        Calclcm obj = new Calclcm();
        int n1=scan.nextInt();
        int n2=scan.nextInt();
        obj.lcm(n1,n2);
    }
      
}