#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    int freq[130],c=0;
    while(getline(cin,st)){
        memset(freq,0,sizeof(freq));
        for(int i=0;i<st.size();i++)
            freq[(int)st[i]]++;
        if(c>0) printf("\n");
        for(int i=1;i<=st.size();i++)
            for(int j=130;j>=0;j--)
                if(freq[j]==i)
                    printf("%d %d\n",j,i);
        c++;
    }
    return 0;
}

