#include<bits/stdc++.h>

using namespace std;

int main(){
    int e,f,c,tc;
    cin>>tc;
    while(tc--){
        cin>>e>>f>>c;
        int soda=0,s=0;
        s=(e+f);
        while(s>=c){
            soda+=s/c;
            f=s%c;
            e=s/c;
            s=(e+f);
        }
        printf("%d\n",soda);
    }
    return 0;
}

