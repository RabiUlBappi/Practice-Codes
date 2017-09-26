#include<cstdio>
#include<string>
#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    string line;
    ///freopen("0in.txt","r",stdin);
    while(getline(cin,line)){
        for(int i=0;i<line.size();i++){
            printf("%c",line[i]-7);
        }
        cout<<endl;
    }
}

