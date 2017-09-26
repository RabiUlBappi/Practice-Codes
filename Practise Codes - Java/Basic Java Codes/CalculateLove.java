package my;
import java.lang.String;
import java.util.Scanner;

class CalculateLove{
    static Scanner scan = new Scanner(System.in);
    
    static int countName(String name){
        int soan=0,sum=0;
        int l=name.length();
        for(int i=0;i<l;i++){
            if(name.charAt(i)>='A' && name.charAt(i)<='Z')
            soan+=(name.charAt(i)-'A'+1);
            else if(name.charAt(i)>='a' && name.charAt(i)<='z')
            soan+=(name.charAt(i)-'a'+1);
        }
        while(soan!=0){
            sum+=soan%10;
            soan/=10;
        }
        return sum;
    }
    
    public static void main(String args[]){
        double love=0;
        System.out.print("1st Name: ");
        String name1 = scan.nextLine();
        System.out.print("\n");
        System.out.print("2nd Name: ");
        String name2 = scan.nextLine();
        int sf1=countName(name1);
        int sf2=countName(name2);
        if(sf2<=sf1) love = (sf2*100)/sf1;
        else love = (sf1*100)/sf2;
        System.out.println("Percentage of love between them: "+love+"%");
    }
}