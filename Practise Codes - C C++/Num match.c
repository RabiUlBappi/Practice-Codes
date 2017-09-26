#include<stdio.h>
main()
{
    int i,match,k,j[100];
    for(i=0;i<5;i++)
        scanf("%d",&j[i]);
    for(i=0;i<5;i++)
    {
        match=j[i];
       for(k=j+1;k<5;k++)
        if(match==j[k])
            printf("%d is duplicated",match);
    }
    return 0;
}
