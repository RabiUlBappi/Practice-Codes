#include<stdio.h>
int main()
{
    int a,b,x=1,y;
    while(1)
    {
        scanf("%d",&a);
        if(a<0)
            break;
        else{
        b=1;
        y=0;
        while(1)
        {
            b*=2;
            if(b>a)
                break;
            y++;
        }
        if(a-b/2>0)
            y++;
        printf("Case %d: %d\n",x,y);
        x++;
        }
    }
    return 0;
}
