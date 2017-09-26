#include<bits/stdc++.h>
using namespace std;

int main(){
    char num[10000],hex2[100];
    char hex[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    int  decn[16]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    while(gets(num)){
        if(num[0]=='-') break;

        if(num[1]=='x'){
            int dec=0,k=0,len=0;
            len=strlen(num);

            for(int i=len-1;i>=2;i--){
                for(int j=0;j<16;j++){
                    if(num[i]==hex[j]){
                        dec+=decn[j]*pow(16,k);
                        k++;
                    }
                }
            }
            printf("%d\n",dec);
        }
        else{
            long long int numint=atoi(num),m,i=0;
            while(numint!=0)
            {
                m=numint%16;
                numint/=16;
                hex2[i]=hex[m];
                i++;
            }
            hex2[i]='\0';
            cout<<"0x";
            for(int j=i-1;j>=0;j--)
                printf("%c",hex2[j]);
            cout<<"\n";
        }
    }
    return 0;
}
