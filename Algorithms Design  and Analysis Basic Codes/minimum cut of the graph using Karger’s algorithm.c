#include<bits/stdc++.h>
#define sf scanf
#define pf printf
using namespace std;
int par[210],cost[210][2100],w[210][2100],num[20];
vector<int>E[210];
int bfs(int s,int t){
int vis[210];
memset(vis,0,sizeof(vis));
queue<int>Q;
Q.push(s);
vis[s]=1;
par[s]=-1;
while(!Q.empty()){
int u=Q.front();
Q.pop();
for(int i=0;i<E[u].size();i++){
int v=E[u][i];
if(v==0&&cost[u][v]>0){
Q.push(v);
vis[v]=1;
par[v]=u;}}}
return vis[t];}
int max_flow(int s,int t){
int result=0;
while(1){
int d=bfs(s,t);
if(d==0) break;
int path=100000,u,v;
u=t;
while(par[u]>-1){
v=par[u]; 
path=min(path,cost[v][u]);
u=v;}u=t;
while(par[u]>-1){
v=par[u];cost[v][u]-=path;cost[u][v]+=path;
u=v;}result+=path;return result;}
char str[210][1001];
int main(){
freopen("in","r",stdin);
int i,j,p,n;
for(i=1;i<=200;i++){
gets(str[i]);}
for(i=1;i<=200;i++){
int len=strlen(str[i]);
for(int j=0;j<len;j++){
p=0;
if(str[i][j]>='0'&&str[i][j]<='9'){
while(str[i][j]>='0'&&str[i][j]<='9'){
num[p++]=str[i][j]-'0';
j++;} j--;}if(p>0){
if(p==3) n=num[0]*100+num[1]*10+num[2];
if(p==2) n=num[0]*10+num[1];
if(p==1) n=num[0];
E[i].push_back(n);E[n].push_back(i);
cost[i][n]=1;cost[n][i]=1;w[n][i]=1;}}}
int ans=max_flow(1,2);
printf("%d\n",ans);}