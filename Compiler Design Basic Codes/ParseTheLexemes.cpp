#include <bits/stdc++.h>

using namespace std;

void keyw(char *p);
int i=0;
char keys[32][10] = {"int","double","char"};

int main(){
    char ch, str[25], seps[15] = " \t\n", oper[]= "+-=,;{}";
    FILE *f1;

    f1 = fopen("input.txt", "r");

    if(f1==NULL) printf("No File Found!");

    while((ch=fgetc(f1))!=EOF){
        for(int j=0;j<=6; j++){
            if(ch==oper[j]){
                printf("Operator:   %c\n",ch);
                str[i]='\0';
                keyw(str);
            }

        }

        for(int j=0;j<=2; j++){
            if(i==-1) break;
            if(ch ==seps[j]){
                str[i]='\0';
                keyw(str);
            }
        }

        if(i!=-1){
            str[i]=ch;
            i++;
        }
        else i = 0;
    }
}


void keyw(char *p){
    int k, flag=0,len = strlen(p);

    if(p[len-2]=='(' && p[len-1]==')')
        printf("Function:   %s\n",p);
    else{
        for(k=0;k<=30;k++){
            if(strcmp(keys[k],p)==0 && strlen(p)>0){
                printf("Keyword :   %s\n",p);
                flag=1;
                break;
            }
        }
        if(flag==0){
            if(isdigit(p[0]))
                printf("Number  :   %s\n",p);
            else
                if(p[0]!='\0')
                    printf("Variable:   %s\n",p);
        }
    }
    i=-1;
}


