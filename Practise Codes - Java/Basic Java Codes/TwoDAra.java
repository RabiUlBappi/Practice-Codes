package my;

class TwoDAra{
    public static void main(String args[]){
       int twoD[][] = new int[6][];
       int a,b;
       for(a=0,b=1;a<6;a++,b++){
        twoD[a]= new int[b];
    }
        /*twoD[0]= new int[1];
        twoD[1]= new int[2];
        twoD[2]= new int[3];
        twoD[3]= new int[4];
        twoD[4]= new int[5];
        twoD[5]= new int[6];*/
        
        int i,j,k=0;
        for(i=0;i<6;i++)
            for(j=0;j<i+1;j++){
                twoD[i][j]=k;
                k++;
        }
        for(i=0;i<6;i++){
            for(j=0;j<i+1;j++)
                System.out.print(twoD[i][j]+" ");
                System.out.println();
        }
    }
}