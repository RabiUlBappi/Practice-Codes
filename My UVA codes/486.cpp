#include<cstdio>
#include<cstring>
#include<sstream>
#include<iostream>

using namespace std;

int main(){
    //char num[20][20];
    string numstr,s,word[]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
                    "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
                    "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    int number[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,30,40,50,60,70,80,90};

    freopen("0in.txt","r",stdin);
    while(getline(cin,numstr)){
        istringstream ss(numstr);
        //ss>>s;
        /*int len,k=0,index=0,j;
        len=numstr.size();
        for(int i=0;i<len;i++){
            if(numstr.at(i)==' '||i==len-1){
                if(i==len-1){
                    num[index][k++]=numstr.at(i);
                    num[index][k++]='\0';
                }
                num[index][k]='\0';
                index++;
                k=0;
                continue;
            }
            num[index][k]=numstr.at(i);
            k++;
        }

        nine hundred ninety nine million nine hundred ninety nine thousand nine hundred ninety nine
six
negative seven hundred twenty nine
one million one hundred one
six hundred fifty two thousand
five hundred twenty seven million
negative nine hundred ninety nine million nine hundred ninety nine thousand nine hundred ninety nine

        */
        long long int million=0,thousand=0,hundred=0,tmp=0;
        while(ss>>s){
           for(int i=0;i<28;i++){
                if(s==word[i]){
                    tmp+=number[i];
                    break;
                }
                else if(s=="negative"){
                    cout<<"-";
                    break;
                }
                else if(s=="million"){
                    million=tmp*1000000;
                    tmp=0;
                    break;
                }
                else if(s=="thousand"){
                    thousand=tmp*1000;
                    tmp=0;
                    break;
                }
                else if(s=="hundred"){
                    tmp=tmp*100;
                    break;
                }
            }
        }
        printf("%lld\n",million+thousand+tmp);
    }
    return 0;
}
