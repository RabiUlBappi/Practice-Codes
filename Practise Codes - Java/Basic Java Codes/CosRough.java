package my;

import java.util.Scanner;
import java.math.*;
class CosRough{
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int n,i,j,x1; 
        double cosx,sign,fact; 
        System.out.println("Enter the value of angle(in degrees)\n"); 
        x=input.nextDouble(); 
        x1=(int)x; 
        x=x*(3.142/180.0); 
        cosx=1; 
        sign=-1; 
        for(i=2;i<=1000;i=i+2) 
        { 
            fact=1; 
            for(j=1;j<=i;j++) 
          { 
              fact=fact*j; 
          } 
          cosx=cosx+(Math.pow(x,i)/fact)*sign; 
          sign=sign*(-1); 
        } 
        System.out.println(cosx);
    }
      
}