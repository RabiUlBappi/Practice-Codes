#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stack>
#include<algorithm>
#include<time.h>
#include<iostream>
using namespace std;
int Treeb[52];
int Treen[52];
int Treex[52];
int a[3],maxx,minn,mid;
void binarySearch(int root){
    if(Treeb[2*root]==-1)
        return;
        binarySearch(2*root);
    binarySearch(2*root+1);
         a[0]=Treeb[root];
    a[1]=Treeb[root*2];
    a[2]=Treeb[2*root+1];
    sort(a,a+3);
    Treeb[root]=a[1];
    Treeb[2*root]=a[0];
    Treeb[2*root+1]=a[2];
    binarySearch(2*root);
}
void maxHeap(int root){
    if(Treeb[2*root]==-1)      return;
maxHeap(2*root);
    maxHeap(2*root+1);
         if(Treex[root*2]>Treex[root]&&Treex[root*2]>Treex[root*2+1])
            swap(Treex[root],Treex[root*2]);
            else if(Treex[root*2+1]>Treex[root]&&Treex[root*2+1]>Treex[root*2])
            swap(Treex[root],Treex[root*2+1]);
    maxHeap(2*root);
    maxHeap(2*root+1);}
void minHeap(int root){
    if(Treeb[2*root]==-1) return;
minHeap(2*root);
    minHeap(2*root+1);
         if(Treen[root*2]<Treen[root]&&Treen[root*2]<Treen[root*2+1])
            swap(Treen[root],Treen[root*2]);
            else if(Treen[root*2+1]<Treen[root]&&Treen[root*2+1]<Treen[root*2])
            swap(Treen[root],Treen[root*2+1]);
    minHeap(2*root);
    minHeap(2*root+1);
}
int main(){
srand (time(NULL));
int PTR=1,PTR2,node,no;;
cout<<"Enter nodes number 1-50"<<endl;
cin>>node;
no=node;
memset(Treeb,-1,sizeof(Treeb));
memset(Treex,-1,sizeof(Treex));
memset(Treen,-1,sizeof(Treen));
while(node--){
    Treen[PTR]=Treex[PTR]=Treeb[PTR]=rand()%100;
        PTR++;}
cout<<"printing the RANDOM tree"<<endl<<endl;
for(int i=1;i<=no/2;i++)
    cout<<"root--> "<<Treeb[i]<<" left--> "<<Treeb[2*i]<<" right--> "<<Treeb[2*i+1]<<endl;
cout<<endl<<"printing BINARY SEARCH tree"<<endl<<endl;
binarySearch(1);
for(int i=1;i<=no/2;i++)
    cout<<"root--> "<<Treeb[i]<<" left--> "<<Treeb[2*i]<<" right--> "<<Treeb[2*i+1]<<endl;
cout<<endl<<"printing MAX HEAP tree"<<endl<<endl;
maxHeap(1);
for(int i=1;i<=no/2;i++)
    cout<<"root--> "<<Treex[i]<<" left--> "<<Treex[2*i]<<" right--> "<<Treex[2*i+1]<<endl;
cout<<endl<<"printing MIN HEAP tree"<<endl<<endl;
minHeap(1);
for(int i=1;i<=no/2;i++)
    cout<<"root--> "<<Treen[i]<<" left--> "<<Treen[2*i]<<" right--> "<<Treen[2*i+1]<<endl;
return 0;}
