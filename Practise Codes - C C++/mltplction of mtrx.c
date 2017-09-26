#include"stdio.h"
int main()
{
    char c=' ';
    int ma, na, mb, nb, i, j, k;
    scanf("%d%d%d%d", &ma, &na, &mb, &nb);
    int A[ma][na], B[mb][nb], C[ma][nb];
    for(i=0; i<ma; i+=1)
        for(j=0; j<na; j+=1)
            scanf("%d", &A[i][j]);
    for(i=0; i<mb; i+=1)
        for(j=0; j<nb; j+=1)
            scanf("%d", &B[i][j]);
    for(i=0; i<ma; i+=1)
    {
        for(j=0; j<nb; j+=1)
        {
            C[i][j]=0;
            for(k=0; k<na; k+=1)
                C[i][j]+=A[i][k]*B[k][j];
            printf("%d   ", C[i][j]);
        }
        printf("\n");
    }
    printf("\n\n%30cThanks God.\n\n\n", c);
    return 0;
}
