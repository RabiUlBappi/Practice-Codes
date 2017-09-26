#include<bits/stdc++.h>
using namespace std;
vector<int>g[100],N,bg[100];
bool vis[101];
int ft[100],z;
void dfs(int u)
{
vis[u]=1;
z++;
for(int i=0; i<g[u].size(); i++)
{
if(vis[g[u][i]]==0)
dfs(g[u][i]);
}
ft[u]=z++;
}
void dfs2(int u)
{
vis[u]=1;
cout<<u<<" ";
for(int i=0; i<bg[u].size(); i++)
{
if(vis[bg[u][i]]==0)
dfs2(bg[u][i]);
}
}
int main()
{
freopen("Prob06.txt","r",stdin);
int u,v,i;
N.clear();
memset(vis,0,sizeof vis);
while(cin>>u>>v)
{
if(vis[u]==0)vis[u]=1,N.push_back(u);
if(vis[v]==0)vis[v]=1,N.push_back(v);
g[u].push_back(v);
bg[v].push_back(u);
}
memset(vis,0,sizeof vis);
memset(ft,0,sizeof ft);
z=1; 
for(i=0; i<N.size(); i++)
{
if(vis[N[i]]==0)
{
dfs(N[i]);
}
}
vector<pair<int,int> >q;
for(i=0; i<N.size(); i++)
q.push_back(make_pair(ft[N[i]],N[i]));
sort(q.begin(),q.end());
reverse(q.begin(),q.end());
memset(vis,0,sizeof vis);
int y=1,d;
for(i=0; i<N.size(); i++)
{
if(y>6)break;
d=q[i].second;
if(vis[d]==0)
{
cout<<"Scc: "<<y<<" -> ";
dfs2(d);
cout<<endl;
y++;
}
}
}