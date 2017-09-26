#include <stdio.h>
int main(){
   int p,i, a, allocation, base[100], limit[100], seg,offset;
   printf("Input process number: ");
   scanf("%d", &p);
   printf("\nInput limit and base:\n\n");

   for(i=1; i<=p; i++){
        printf("P%d: ",i);
        scanf("%d %d",  &limit[i], &base[i]);
   }

   for(i=0; ; i++){
       printf("\nGive segment and offset: ");
       scanf("%d%d",&seg, &offset);
       if(limit[seg]>offset){
           printf("Segment block no: %d  %d %d\n ",seg,base[seg], base[seg]+offset);
       }
       else printf("There's a Trap!\n\n");
   }
}


