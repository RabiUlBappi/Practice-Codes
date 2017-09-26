package my;

class ReverseNum{
    public static void main(String args[]){
        int num=1234,j,k=0,new_num=0;
        while(num!=0){
            j=num%10;
            new_num = new_num*10 + j;
            num = num/10;
        }
        System.out.println(new_num);
    }
}