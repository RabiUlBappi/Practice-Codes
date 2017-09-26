package my;

class ReverseNumAdd2Num{
    public static void main(String args[]){
        int num=12345,j,k=0,new_num=0,sum=0;
        while(num!=0){
            j=num%10;
            new_num = new_num*10 + j;
            num = num/10;
        }
        while(1){
            
        }
        System.out.println(new_num);
        System.out.println(sum);
    }
}