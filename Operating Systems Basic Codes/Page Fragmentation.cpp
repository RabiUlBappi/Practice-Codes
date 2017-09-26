#include<bits/stdc++.h>
#include<time.h>

int main(){
    int pageSize,physicalMemory,frameNumber;
    srand(time(NULL));

    printf("Enter Page Size: ");
    scanf("%d", &pageSize);
    printf("Enter Physical Memory Size: ");
    scanf("%d", &physicalMemory);
    frameNumber = physicalMemory / pageSize;
    int frameTable[frameNumber];
    memset(frameTable,-1,sizeof(frameTable));

    for(;;){
        int processSize = 0,pageNumber = 0,mod = 0;
        printf("Enter Process Size: ");
        scanf("%d", &processSize);
        pageNumber = processSize / pageSize;
        mod = processSize % pageSize;

        if(mod > 0) pageNumber++;
        int pageTable[pageNumber],flag=0;

        for(int i = 0; i < pageNumber; i++){
            int ptFrameNumber = rand() % frameNumber;
            if(frameTable[ptFrameNumber] == -1){
                pageTable[i] = ptFrameNumber;
                frameTable[ptFrameNumber] = i;
            }
            else i--;
        }

        printf("\n\nPage Table:\nIndex :: Frame No\n\n");
        for(int i = 0; i < pageNumber; i++){
            printf("  %d   ::    %d\n",i,pageTable[i]);
        }

        printf("\n\nFrame Table:\nIndex :: Page No\n\n");
        for(int i = 0; i < frameNumber; i++){
            if(frameTable[i] >= 0) printf("  %d   ::    %d\n",i,frameTable[i]);
        }

        printf("\n\nFree Frame:\nIndex :: Page No\n\n");
        for(int i = 0; i < frameNumber; i++){
            if(frameTable[i] < 0) printf("  %d   ::    %d\n",i,frameTable[i]);
        }
        printf("\n\n");
    }
}
