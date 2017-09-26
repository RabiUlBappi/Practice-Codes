#include<stdio.h>
main()
{
    int item[100],i,j,l,counta;
       scanf("%d",&counta);
    for(i=0;i<counta;i++)
       scanf("%d",&item[i]);
    for(i=1;i<counta;i++)
        for(j=counta-1;j>=i;j--)
        {
            if(item[j-1]>item[j])
            {
                l=item[j-1];
                item[j-1]=item[j];
                item[j]=l;
            }
        }
    for(l=0;l<counta;l++)
    printf("%d\n",item[l]);
    return 0;

}
