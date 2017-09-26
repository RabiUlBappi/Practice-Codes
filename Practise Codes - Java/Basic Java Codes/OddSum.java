package my;

import java.util.Scanner;
class OddSum{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int a,b,i,j,k=1;
        j=scan.nextInt();
        while(j!=0/*&&j<=100*/){
        int sum=0;
        a=scan.nextInt();
        b=scan.nextInt();
        /*if(a>=0){*/
        for(i=a;i<=b;i++){
            if(i%2!=0)
            sum+=i;
        }
        System.out.println("Case "+k+": "+sum);
        j--;
        k++;
        /*}*/
        }
     }
}