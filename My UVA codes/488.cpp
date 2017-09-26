/*#include<cstdio>
using namespace std;

int main(){
    int tc,n,Amplitude,Frequency;
        scanf("%d",&n);
        for(tc=0;tc<n;tc++){
            if(tc>0) printf("\n");
            scanf("%d%d",&Amplitude,&Frequency);
            for(int i=0;i<Frequency;i++){
                for(int j=1;j<=Amplitude;j++){
                    for(int k=0;k<j;k++){
                        printf("%d",j);
                    }
                    printf("\n");
                }
                for(int j=Amplitude-1;j>0;j--){
                    for(int k=0;k<j;k++){
                        printf("%d",j);
                    }
                    if(i==Frequency-1&&j==1) continue;
                    printf("\n");
                }
                printf("\n");
            }
        }
    return 0;
}
*/

#include<cstdio>

int n, a, b;

int main() {
	scanf("%d", &n);
	for(int t = 0; t < n; t++) {
		if(t > 0) printf("\n");
		scanf("%d\n%d", &a, &b);
		for(int i = 0; i < b; i++) {
			if(i > 0) printf("\n");
			for(int j = 0; j < a * 2 - 1; j++) {
				for(int k = 0; k < (j < a? j + 1 : 2 * a - 1 - j); k++) {
					printf("%d", j < a? j + 1 : 2 * a - 1 - j);
				}
				printf("\n");
			}
		}
	}
}

/*
#include<stdio.h>
int main()
{
int n,a,f,i,j,k,t;
while(scanf("%d",&n)==1)
    {
    for(t=0;t<n;t++)
        {
        scanf("%d %d",&a,&f);
        for(k=0;k<f;k++)
            {
            for(i=0;i<a;i++)
                {
                for(j=0;j<i+1;j++)
                    {
                    printf("%d",i+1);
                    }
                printf("\n");
                }
            for(i=a;i>1;i--)
                {
                for(j=i-1;j>0;j--)
                    {
                    printf("%d",i-1);
                    }
                printf("\n");
                }
            if(t!=n-1 || k!=f-1) printf("\n");
            }
        }
    }
return 0;
}*/
