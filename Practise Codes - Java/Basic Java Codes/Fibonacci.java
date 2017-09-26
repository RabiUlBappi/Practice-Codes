class fibonacci{
    public static void main(String args[]){
        int a=0,b=1;
        int c,i;
        for(i=1;i<=30;i++)
          {
             c=a+b;
             a=b;
             b=c;
             System.out.println(c);
          }
    }
}