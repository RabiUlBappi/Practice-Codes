#include<bits/stdc++.h>
using namespace std;
int a[10010],n,comp;
int part(int l,int h)
{
bool b=0,c=0;
int x=a[l],z=l,i;
while(1)
{
b=0;c=0;
for(i=h;i>z;i--)
{
if(x>a[i])
{
swap(a[z],a[i]);
z=i; b=1;comp++;
break;
}
}
for(i=l;i<z;i++)
{
if(x<a[i])
{
swap(a[z],a[i]);
z=i;c=1;comp++;
break;
}
}
if(b==0&&c==0)break;
}
return z;
}
void q_sort(int lo,int hi) 
{
if(lo>=hi||lo<0||hi>=n)return;
int q=part(lo,hi);
q_sort(lo,q-1);
q_sort(q+1,hi);
}
int main()
{
freopen("Prob04.txt","r",stdin);
int i=0;
while(cin>>a[i++]){}
n=i;
comp=0;
q_sort(0,n-1);
cout<<"<----------By taking first value of arrray as pivot---------->"<<endl;
cout<<"Total Comparison: "<<comp<<endl;
for(i=0;i<n;i++)
cout<<a[i]<<" ";
return 0;
}