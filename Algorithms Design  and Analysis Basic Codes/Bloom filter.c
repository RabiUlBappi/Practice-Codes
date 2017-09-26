#include<bits/stdc++.h>
#define sf scanf
#define pf printf
using namespace std;
int main(){
//freopen("in1","r",stdin);
int n1[1000],n2[1000],n3[1000];
int a,i,b,c;
char str[1000];
pf("Elements: ");
sf("%d",&a);getchar();
b=a;
memset(n1,0,sizeof(n1));memset(n2,0,sizeof(n2));memset(n3,0,sizeof(n3));
pf("Give String:\n");
while(b--){
sf("%s",&str);
int len=strlen(str);
int sum=0;
for(i=0;i<len;i++)
sum+=str[i]-'a';
int   z=sum;
sum=sum%1000;int c2=z+15;
c1=c1/10;c2=c2/11;
n1[c1]=1;n2[c2]=1;
n3[sum]=1;
pf("Index for: %s %d %d %d\n",str,c1,c2,sum);}
pf("\n");
int cont=0,err=0;
while(sf("%s",&str)!=EOF){
cont++;
pf("Search: ");
int len=strlen(str);
int sum=0;
for(i=0;i<len;i++){
sum+=str[i]-'a';}
int z=sum;  
sum=sum%1000;
int c1=z+10;int c2=z+15;
c1=c1/10;c2=c2/11;
if(n1[c1]==1&&n2[c2] ==1&&n3[sum]==1)
pf("Index: %s %d %d %d Yes\n\n",str,c1,c2,sum);
else{
pf("Index: No\n\n");
err++;}}
double ans=(double)(cont-err-a)/(double)1000;
ans*=100;
pf("%lf\n",ans);
}