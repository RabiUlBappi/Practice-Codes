#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#define MAX 50

int menu(void);
void admin(void);
void participent(void);
void enter(void);
void load(void);
void save(void);

struct mcqlist{
    char ques[300],ans[4];
    char choices[4][30];
}mcq[MAX];

int top=0;  /* last location used*/
char pass[7],mypass[]={'a','s','d','\0'};

int main()
{
    int adper;
    load();
    //system("color a");
    printf("1. Admin\n2. Perticipent\n\n");
    printf("Enter 1/2: ");
    scanf("%d",&adper);
    if(adper==1){
        printf("Password: ");
        scanf("%s",pass);
        if(!strcmp(pass,mypass)) admin();
        else printf("Access Denied !\n");
    }
    else if(adper==2)
    participent();
    return 0;
}

void admin(void)
{
    int choice;
    do{
        choice = menu();
        switch(choice){
            case 1: enter();
                break;
            case 2: save();
                break;
        }
    }while(choice!=3);
}

void participent(void)
{
    int score=0,quesnum,i,k,l,no=1,index[MAX]={0};
    char pans[4];
    printf("How many questions do you want to answer: ");
    scanf("%d",&quesnum);
    srand(time(NULL));
    for(k=0;k<quesnum;k++){
        ind:index[k]=rand()%top;
        /*if(k>0)
        for(l=0;l<=k;l++){
            if(index[k]==index[l])
                goto ind;
            else goto a;
        }*/
        a:{
            printf("\n%d. %s\n\n",no++,mcq[index[k]].ques);
            for(i=0;i<4;i++)
                printf("%s\n",mcq[index[k]].choices[i]);
            printf("\n");
            printf("Put your answer: ");
            scanf("%s",pans);
            if(!strcmp(pans,mcq[index[k]].ans)){
                printf("\nCorrect Answer !\n\n");
                score++;
            }
            else{
                printf("\nWrong Answer !\n\n");
                printf("Correct Answer is: %s\n\n",mcq[index[k]].ans);
            }
        }
    }
    printf("You have completeded.\nYour total score is: %d\n",score);
}

/* return a menu selection */
int menu(void)
{
    int i;
    char str[80];
    printf("Admin catalog:\n");
    printf("   1. Enter\n");
    printf("   2. Save cmcqlist\n");
    printf("   3. Quit\n");
    printf("Choose your selection: ");
    do{
        gets(str);
        i=atoi(str);
        printf("\n");
    }while(i<1||i>5);

    return i;
}

void enter(void)
{
    int i,j;
    char temp[80];
    for(i=top;i<MAX;i++)
    {
        printf("Enter question (ENTER to quit): ");
        gets(mcq[i].ques);
        if(!*mcq[i].ques) break;
        printf("Enter choices: ");
        for(j=0;j<4;j++)
        gets(mcq[i].choices[j]);
        printf("Enter answer: ");
        gets(mcq[i].ans);
    }
    top=i;
}

void load(void)
{
    FILE *fp;
    if((fp=fopen("mcqlist.txt","r"))==NULL){
        printf("mcqlist file not on disk.\n");
        return;
    }
    if(fread(&top, sizeof top, 1 ,fp)!=1){  /*read count*/
        printf("Error reading count.\n");
        exit(1);
    }
    if(fread(mcq, sizeof mcq, 1 ,fp)!=1){  /*read data*/
        printf("Error reading mcqlist data.\n");
        exit(1);
    }
    fclose(fp);
}

/*Save the catalog file*/
void save(void)
{
    FILE *fp;
    if((fp=fopen("mcqlist.txt", "w"))==NULL){
        printf("Cannot open mcqlist file. \n");
        exit(1);
    }
    if(fwrite(&top, sizeof top,1,fp)!=1){   /*write count*/
        printf("Error writing count.\n");
        exit(1);
    }
    if(fwrite(mcq, sizeof mcq,1,fp)!=1){   /*write data*/
        printf("Error writing mcqlist data.\n");
        exit(1);
    }
    fclose(fp);
    //system("color 9a");
    printf("\nSAVED.\n");
}

