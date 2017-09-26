#include<stdio.h>
#include<math.h>
main()
{
    int choice,power,bin1,bin2[50],dec1,dec2[50],oct1,oct2[50],hexa1,hexa2[50],k;
    while(1)
    {
        printf("\n\nwhat u want to do?");
        printf("\nif u want to convert binar to decimal press 1");
        printf("\nif u want to convert decimal to binary press 2");
        printf("\nif u want to convert decimal to octant press 3");
        printf("\nif u want to convert decimal to hexadecimal press 4");
        printf("\nif u want to convert octat to decimal press 5");
        printf("\nif u want to convert hexadecimal to decimal press 6");
        printf("\nif u want to exit press 0\n\n");
        scanf("%d",&choice);
        if(choice==0)
        break;
        switch(choice)
        {
            case 1:

            {
                printf("\nEnter the binary number= ");
                scanf(" %d",&bin1);
                k=0;
                power=0;
                dec1=0;
                while(bin1>0);
                {
                k=bin1%10;
                dec1+=k*pow(2,power);
                bin1=bin1/10;
                power++;
                }
                printf("%d",dec1);
                break;
            }
            case 2:
            {
                printf("\nEnter the decimal number= ");
                scanf(" %d",&dec1);
                int i=0;
                while(dec1>0)
                {

                    bin2[i]=dec1%2;
                    i++;
                    dec1=dec1/2;
                }
                for(k=i-1;k>0;k--)
                {
                 printf("%d",bin2[k]);

                }
                break;
        }
          case 3:
          {
                printf("Enter the decimal number= ");
                scanf("%d",&dec1);
                int i=0;
                while(dec1>0)
                {

                    oct2[i]=dec1%8;
                    i++;
                    dec1=dec1/8;
                }
                for(k=i-1;k>0;k--)
                {
                 printf("%d",oct2[k]);
                }
                break;
        }
        case 4:
          {
                printf("Enter the decimal number= ");
                scanf("%d",&dec1);
                int i=0;
                while(dec1>0)
                {

                    hexa2[i]=dec1%16;
                    i++;
                    dec1=dec1/16;
                }
                for(k=i-1;k>0;k--)
                {
                if(hexa2[k]==10)
                printf("A");
               else if(hexa2[k]==11)
                printf("B");
               else if(hexa2[k]==12)
                printf("C");
               else if(hexa2[k]==13)
                printf("D");
               else if(hexa2[k]==14)
                printf("E");
               else if(hexa2[k]==15)
                printf("F");
               else
                 printf("%d",hexa2[k]);
                }
                break;
        }
        case 6:
        {
            printf("Enter the hexadecimal number= ");
            scanf("%d",&hexa1);
            hexa1=0;
            power=0;
            k=0;
            while(hexa1>0)
            {
                k=hexa1%16;
                dec1+=k*pow(16,power);
                power++;
                hexa1=hexa1/16;
            }
            printf("%d",dec1);
            break;
        }
        case 5:
        {
           printf("Enter the octat number= ");
            scanf("%d",&oct1);
            oct1=0;
            power=0;
            k=0;
            while(oct1>0)
            {
                k=oct1%8;
                dec1+=k*pow(8,power);
                power++;
                oct1=oct1/8;
            }
            printf("%d",dec1);
            break;
        }
}
}
return 0;
}
