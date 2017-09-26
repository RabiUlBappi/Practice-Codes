#include<bits/stdc++.h>

using namespace std;

int main(){
    char s[3][33],a[3][33],b[3][33],input[33],mod[33];

    s[0][0]='A';
    s[0][1]='B';
    a[0][0]='a';
    a[0][1]='A';
    a[1][0]='a';
    b[0][0]='b';
    b[0][1]='B';
    b[1][0]='b';

    cin>>input;

    int len=sizeof input;
    int k=0;

    for(int i=len-1; i>=0; i--){
        if(input[i] == b[1][0]){
            input[i] = 'B';
            if(input[i] == b[0][1] && input[i-1] == b[0][0]){
                input[i] = '\0';
                input[i-1] = 'B';
            }
        }
        else if(input[i] == a[1][0]){
            input[i] = 'A';
            if(input[i] == a[0][1] && input[i-1] == a[0][0]){
                input[i] = '\0';
                input[i] = 'A';
            }
        }
    }

    int k1;
    k1=strlen(input)-1;
    if(input[k1]==s[0][1] && input[k1-1]==s[0][0])
        cout<<"Accepted";
    else cout<<"Not Accepted";
    return 0;
}
