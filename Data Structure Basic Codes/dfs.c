#include<cstdio>
#include<iostream>
#include<vector>
#include<stack>
#include<cstdlib>
#include<cstring>

using namespace std;

int main()
{
    int visited[1001],parent[1001],level[1001],i,j,k,n,m,x,y,src,end;
    vector<int>edg[1001];
    printf("Enter the number of nodes:\n");
    scanf("%d",&n);
    printf("Enter tne number of edge:\n");
    scanf("%d",&m);
    printf("Enter the edges:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d %d",&x,&y);
        edg[x].push_back(y);
    }
    memset(visited,0,sizeof(visited));
    memset(level,0,sizeof(level));
    memset(parent,0,sizeof(parent));
    printf("Enter the node of start & end:\n");
    scanf("%d %d",&src,&end);
    visited[src]=0; // ready state
    level[src]=0;
    parent[src]=-1;
    stack<int>box;
    box.push(src);
    visited[src]=1;
    while(!box.empty())
    {
        int u=box.top();
        box.pop();
        for(i=0;i<edg[u].size();i++)
        {
            int v=edg[u][i];
            if(visited[v]==0)
            {
                box.push(v);
                visited[v]=1;
                level[v]=level[u]+1;
                parent[v]=u;
                if(v==end)
                    break;
            }
        }
        visited[u]=2; 
    }
    printf("level of %d: %d\n",end,level[end]);
    int temp=end;
    printf("The path is:\n");
    while(temp!=-1)
    {        printf(" %d <-",temp);
        temp=parent[temp];
    }
    return 0;
}
