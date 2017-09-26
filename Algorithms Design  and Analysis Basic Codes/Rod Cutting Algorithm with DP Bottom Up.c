#include<bits/stdc++.h>
using namespace std;
int cost[100],dp[100];
int main(){
int n,i,m,j;
cin>>n;
for(i=1; i<=n; i++)cin>>cost[i];
while(cin>>m)
{
for(i=1; i<=m; i++)dp[i]=cost[i];
for(i=2; i<=m; i++)
{
for(j=1; j<=(i>>1); j++)
{
dp[i]=max(dp[i],dp[j]+dp[i-j]);
}
}
cout<<dp[m]<<endl;
}
}