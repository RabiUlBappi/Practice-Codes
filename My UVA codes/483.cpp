#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;

main()
{
    string line;
    char subline[100];
    while(getline(cin,line)){
        int len,k=0;
        len=line.size();
        for(int i=0;i<len;i++){
            if(line.at(i)==' '||i==len-1){
                if(i==len-1) subline[k++]=line.at(i);
                for(int j=k-1;j>=0;j--)
                    printf("%c",subline[j]);
                if(i!=len-1) printf("%c",' ');
                k=0;
                continue;
            }
            subline[k]=line.at(i);
            k++;
        }
        printf("\n");
    }
    return 0;
}
