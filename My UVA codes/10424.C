#include<stdio.h>
#include<string.h>
int summing(int num)
{
    if(num<10)
        return num;
    int sum=0;
    while(num!=0)
    {
        sum+=num%10;
        num/=10;
    }
    return summing(sum);
}
main()
{
    char name1[100],name2[100];
    int i,j,l1,l2,soan1,soan2;
    double res,sf1,sf2;
    while(gets(name1)&&gets(name2))
    {
        soan1=0;
        soan2=0;
        l1=strlen(name1);
        l2=strlen(name2);
        for(i=0;i<l1;i++)
        {
            if(name1[i]>='A'&&name1[i]<='Z')
            soan1+=(name1[i]-'A'+1);
            else if(name1[i]>='a'&&name1[i]<='z')
            soan1+=name1[i]-'a'+1;
        }
        for(j=0;j<l2;j++)
        {
            if(name2[j]>='A'&&name2[j]<='Z')
            soan2+=name2[j]-'A'+1;
            else if(name2[j]>='a'&&name2[j]<='z')
            soan2+=name2[j]-'a'+1;
        }
        sf1=summing(soan1);
        sf2=summing(soan2);
        if(sf2<sf1)
            printf("%.2lf %%\n",(sf2/sf1)*100.0);
        else
            printf("%.2lf %%\n",(sf1/sf2)*100.0);

    }

}

