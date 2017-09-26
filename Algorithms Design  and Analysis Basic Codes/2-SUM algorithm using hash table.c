#include<bits/stdc++.h>
using namespace std;
int md=997,h[1000];
int hf(int n) {return (n%md);}
void ins(int n,int i) {  h[hf(n)]=i;}
int main(){
freopen("2.txt","r",stdin);
int cn=0;
int a[100],i,j,n;
int t;
cin>>t;
while(cin>>n){
memset(h,-1,sizeof h);
for(i=0;i<n;i++)cin>>a[i],ins(n,i);
for(i=0;i<n;i++){
if(h[hf(t-a[i])]!=-1){
if(h[hf(t-a[i])]!=i){
cn++;
break;
} }
}
}
cout<<cn<<endl;
}