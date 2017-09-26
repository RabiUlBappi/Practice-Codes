#include"stdio.h"
int main()
{
    char c=' ';
    int m, n, i, j;
    printf("Enter value for m & n to sum two matrix.\n\nm=?");
    scanf("%d", &m);
    printf("n=?");
    scanf("%d", &n);
    int A[m][n], B[m][n], C[m][n];
    printf("Enter your matrix A & B.\n");
    for(i=0; i<m; i+=1)
        for(j=0; j<n; j+=1)
            scanf("%d", &A[i][j]);
    for(i=0; i<m; i+=1)
        for(j=0; j<n; j+=1)
            scanf("%d", &B[i][j]);
    printf("Your resultant matrix is\n");
    for(i=0; i<m; i+=1)
    {
        for(j=0; j<n; j+=1)
        {
            C[i][j]=A[i][j] + B[i][j];
            printf("%d   ", C[i][j]);
        }
        printf("\n");
    }
    printf("\n\n%30cThanks God.\n\n\n", c);
    return 0;
}
