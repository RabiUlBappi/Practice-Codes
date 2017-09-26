#include<bits/stdc++.h>
using namespace std;
int cost[100],dp[1000];
int fun(int n){
if(n<=0)return 0;
if(n==1)return cost[n];
if(dp[n]!=-1)return dp[n];
int i,res=0,rr=-1;
for(i=1;i<n;i++){
res=max(cost[n],fun(n-i)+fun(i));
rr=max(rr,res);
}
return dp[n]=rr; 
}
int main(){
int n,i,m;
cin>>n;
for(i=1;i<=n;i++)cin>>cost[i];
while(cin>>m)
{
memset(dp,-1,sizeof dp);
cout<<fun(m)<<endl;
}
}