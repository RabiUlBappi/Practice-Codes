#include<stdio.h>
main()
{
    int t1,t2,f,atn,ct1,ct2,ct3,c,c1=0,d,t;
    char ch;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d%d%d%d",&t1,&t2,&f,&atn,&ct1,&ct2,&ct3);
        if(ct1<=ct2 && ct1<=ct3)
        c=(ct2+ct3)/2;
        else if(ct2<=ct1 && ct2<=ct3)
        c=(ct1+ct3)/2;
        else if(ct3<=ct1 && ct3<=ct2)
        c=(ct1+ct2)/2;
        d=t1+t2+f+atn+c;
        if(d>=90)
           ch='A';
        else if(d>=80)
            ch='B';
        else if(d>=70 )
            ch='C';
        else if(d>=60)
            ch='D';
        else
            ch='F';
        printf("Case %d: %c\n",++c1,ch);
    }
    return 0;
}
