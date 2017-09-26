#include<cstdio>
#include<string>
#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    string line;
    int n=0;
    //freopen("0in.txt","r",stdin);
    while(getline(cin,line)){
        for(int i=0;i<line.size();i++){
            if(line[i]=='"'){
                n++;
                if(n%2==1) printf("``");
                if(n%2==0) printf("''");
            }
            else printf("%c",line[i]);
        }
        cout<<endl;
    }
}
