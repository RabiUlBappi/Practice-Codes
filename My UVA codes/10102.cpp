#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;

#define CLR(a) memset(a,0,sizeof(a))

int min_dist(int x,int y);
char grid[1000][1000];
int m;

main()
{
    while(cin>>m)
    {
        CLR(grid);
        for(int i=0;i<m;i++)
            for(int j=0;j<m;j++)
                cin>>grid[i][j];
        int mx=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<m;j++)
                if(grid[i][j]=='1')
                {
                    int tmp=min_dist(i,j);
                    mx=max(mx,tmp);
                }
        cout<<mx<<endl;
    }
}

int min_dist(int x,int y)
{
    int mn=1000;
    for(int i=0;i<m;i++)
        for(int j=0;j<m;j++)
            if(grid[i][j]=='3')
            {
                int tmp=abs(x-i)+abs(y-j);
                mn=min(mn,tmp);
            }
    return mn;
}
