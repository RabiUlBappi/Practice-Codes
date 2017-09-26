package my;

class Calc{
    int add(int a,int b){
        return a+b;
    }
     
 }
class Additon{
    public static void main(String args[]){
        Calc ad = new Calc();
        
        int sum = ad.add(32,54);
        System.out.println(sum);
                }
}