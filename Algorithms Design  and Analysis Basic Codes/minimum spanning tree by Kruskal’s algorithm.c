#include<bits/stdc++.h>
#define sf scanf
#define pf printf
using namespace std;
int s=0,cont=0;
struct edge{
int u,v,w;
bool operator <(const edge & p ) const{
return w < p.w;}
};
int pr[100];
vector<edge>e;
int fn(int r){
return(pr[r]==r)?r : fn(pr[r]);}
int mst(int n){
sort(e.begin(),e.end());
for(int i=1;i<=n;i++)
pr[i]=i;
for(int i=0;i<e.size();i++){
int u=fn(e[i].u);
int v=fn(e[i].v);
if(u!=v) { 
pr[u]=v;
cont++;
s+=e[i].w;
if(cont==n-1){
pf("%d = ",e[i].w);
break;}
pf("%d + ",e[i].w); }
return s;}
int main(){
int n,m,u,v,w;
sf("%d",&n);
pf("No of veries: %d\n",n);
sf("%d",&m);
pf("No of edges: %d\n",m);
for(int i=1;i<=m;i++){
sf("%d%d%d",&u,&v,&w);
edge get;
get.u=u;get.v=v;get.w=w;
e.push_back(get);
}mst(n);
pf("%d\n",s);}