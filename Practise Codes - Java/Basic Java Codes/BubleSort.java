package my;

class BubleSort{
    public static void main(String args[]){
        int ara[] = {81,41,51,61,31,71};
        int i,j,l;
        for(i=0;i<6;i++)
            for(j=5;j>0;j--)
            {
                if(ara[j-1]>ara[j]){
                l=ara[j-1];
                ara[j-1]=ara[j];
                ara[j]=l;
                }
                    
            }
        for(l=0;l<6;l++){
            System.out.println(ara[l]);
        }
    }
}