#include<iostream>
#include<algorithm>
#include<iomanip>
#include<fstream>
#include<sstream>
#include<string>
#include<cstring>
#include<cctype>
#include<vector>
#include<cmath>
using namespace std;



int main()

{

    int n,i,x,y;
    scanf("%d",&n);
    vector < pair<int, int> > v;
    for(i=0;i<n;i++){
        scanf("%d%d",&x,&y);
        v.push_back(make_pair (x,y));
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++){
        printf("%d %d\n",v[i].first,v[i].second);
    }
        return 0;
}
