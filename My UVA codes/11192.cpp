#include<stdio.h>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    int grpnum;
    string line;
    while(1){
        scanf("%d",&grpnum);
        if(grpnum==0) break;
        cin >> line;

        string substring;
        int ls=line.size();

        int substrlen = (int)(ls/grpnum);
        int modsubstrlen = ls%grpnum;
        int m=0,n=0;
        for(int i=0;i<grpnum;i++){
            if(modsubstrlen>0){
                int temp=substrlen+1;
                int k= i*temp;
                for(int j=temp-1;j>=0;j--){
                    printf("%c",line[k+j]);
                    n++;
                }
                modsubstrlen--;
                m++;
            }
            else{
                int l= n+(i-m)*substrlen;
                for(int j=substrlen-1;j>=0;j--){
                    printf("%c",line[l+j]);
                }
            }
        }
        printf("\n");
    }
}
