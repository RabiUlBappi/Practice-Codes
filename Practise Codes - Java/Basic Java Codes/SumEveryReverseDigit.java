package my;

import java.util.Scanner;
class SumEveryReversedDigit{
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int num,new_num=0,j,sum=0;
        num = scan.nextInt();
        while(num!=0){
            j=num%10;
            new_num = new_num*10 + j;
            sum=sum+j;
            num=num/10;
        }
        System.out.println(new_num);
        System.out.println(sum);
    }
}