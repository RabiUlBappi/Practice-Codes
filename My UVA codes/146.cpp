#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main(){
    char c[65];
    while (scanf("%s",c)==1 && c[0]!='#'){
        if (next_permutation (c,c+strlen(c)))
            printf("%s\n",c);
        else printf("No Successor\n");
    }
    return 0;
}
