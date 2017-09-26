/*#include<bits/stdc++.h>

using namespace std;

int vowel (char X){
    if (X==65||X==69||X==73||X==79||X==85||X==97||X==101||X==105||X==111||X==117)
        return 1;
    return 0;
}

int main(){
    string line;
    while(getline(cin,line)){
        int len,ay=0,agent=0;
        len=line.size();
        for(int i=0;i<len;i++){
            int vow=0;
            if(line.at(i)==' '||i==len-1){
                if(i==len-1 && isalpha(line.at(i))) printf("%c",line.at(i));
                if(vow) {printf("%c",line.at(i-agent));vow=0;}
                if(ay) printf("ay"),ay=0;
                if(i<len-1) printf(" ");
                if(i==len-1 && !isalpha(line.at(i))) printf("%c",line.at(i));
                agent=0;
                continue;
            }
            if(!ay && vowel(line.at(i))) ay=1;
            if(!agent){
                if(!vowel(line.at(i))) vow=1;
                else printf("%c",line.at(i));
            }
            if(agent) printf("%c",line.at(i));
            agent++;
        }
        printf("\n");
    }
    return 0;
}
*/

#include <bits/stdc++.h>
#define Max 1000000

int vowel (char X)
{
    if (X==65 || X==69 || X==73 || X==79 || X==85 || X==97 || X==101 || X==105 || X==111 || X==117)
        return 1;
    return 0;
}

int main ()
{
    char Save, C;

    while (C = getchar ()) {

        if (C == EOF)
        return 0;

        if (isalpha (C)) {
            if (vowel (C)) {
                while (isalpha (C)) {
                    printf("%c", C);
                    C = getchar ();
                }
                printf("ay");
            }

            else {
                Save = C;
                C = getchar ();
                while (isalpha (C)) {
                    printf("%c", C);
                    C = getchar ();
                }
                printf("%cay", Save);
            }
        }
        printf("%c", C);
    }
    return 0;
}

