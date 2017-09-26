#include<stdio.h>
#include<string.h>
#define index 1000000
#define mn(p,q) p<q?p:q
#define mx(p,q) p>q?p:q

int main(){
    int tc=0,query,minv,maxv;
    char str[index];
    while(scanf("%s%d",str,&query)==2){
        int i[query],j[query],ans[query];

        for(int k=0;k<query;k++){
            scanf("%d%d",&i[k],&j[k]);
            if(i[k]==j[k]) {ans[k]=1; continue;};
            minv=mn(i[k],j[k]);
            maxv=mx(i[k],j[k]);
            for(int l=minv;l<=maxv;l++){
                if(str[l]==str[minv]) ans[k]=1;
                else {ans[k]=0; break;}
            }
        }

        printf("Case %d:\n",++tc);
        for(int k=0;k<query;k++){
            if(ans[k]==1) printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}
