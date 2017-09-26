package my;

class SumEveryDigit{
    public static void main(String args[]){
        int num=123456789,sum=0,j;
        while(num!=0){
            j=num%10;
            sum=sum+j;
            num=num/10;
        }
        System.out.println(sum);
    }
}