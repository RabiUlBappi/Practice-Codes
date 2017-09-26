#include<stdio.h>
main()
{
    int m,n,k=1;
    scanf("%d",&n);
    for(m=1;m<=n;m++)
    {
        int i,j,a=0,t=0,b=0,w=0;
        char s2[11];
        scanf("%d",&i);
        scanf("%s",s2);
        for(j=0;j<i;j++)
        {
            if(s2[j]=='B')
                b++;
            else if(s2[j]=='W')
                w++;
            else if(s2[j]=='A')
                a++;
            else if(s2[j]=='T')
                t++;
        }
        if(a==i)
            printf("Case %d: ABANDONED\n",m);
        else
        {
            i-=a;
            if(b==i)
                printf("Case %d: BANGLAWASH\n",m);
            else if(w==i)
                printf("Case %d: WHITEWASH\n",m);
            else if(b>w)
                printf("Case %d: BANGLADESH %d - %d\n",m,b,w);
            else if(b<w)
                printf("Case %d: WWW %d - %d\n",m,w,b);
            else if(b==w)
                printf("Case %d: DRAW %d %d\n",m,b,t);
        }
    }
}
