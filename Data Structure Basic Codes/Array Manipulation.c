/*
Merge the elements of two 1-D arrays random inputs.
Sort data in ascending and descending order
Find the frequency of each number
Eliminate the duplicate elements      //ex: for array =1,2,2,2,3; show 1,2,3
Input a number and print the large numbers than the inputted number.
Insert and delete numbers from the array.    //insert an inputted value at inputted index. Delete 
*/

#include <stdio.h>
#include<algorithm>
#include<string.h>
#include<time.h>
#include<stdlib.h>
using namespace std;
void merge(int [], int, int [], int, int []);
void frequency(int sorted[],int p);
void duplicate(int sorted[],int size);
void larger(int large[],int size);
void insert(int arr[],int size);
void delect(int arr[],int size);
int main() {
  int a[100], b[100], m, n, c, sorted[200],arrcpy1[1000],arrcpy2[1000],arrcpy3[1000];
    srand(time(NULL));
  printf("Input number of elements in first array\n");
  scanf("%d", &m);
  printf("First array elements-\n");
  for (c = 0; c < m; c++) {
    a[c]=rand()%200+1;
    printf("%d ",a[c]);
  }
  printf("\n");
  printf("Input number of elements in second array\n");
  scanf("%d", &n);
 // printf("Input %d integers\n", n);
 printf("Second array elements-\n");
  for (c = 0; c < n; c++) {
    b[c]=rand()%200+1;
    printf("%d ",b[c]);
  }
  printf("\n");
  merge(a, m, b, n, sorted);
  printf("merged array:\n");
  for (c = 0; c < m + n; c++) {
    printf("%d ", sorted[c]);
    arrcpy1[c]=sorted[c];
    arrcpy2[c]=sorted[c];
    arrcpy3[c]=sorted[c];
  }
  printf("\n");
  sort(sorted,sorted+(m+n));
  printf("Ascending order\n");
  for (c = 0; c < m + n; c++) {
    printf("%d ", sorted[c]);
  }
  printf("\n");
   printf("Decending order\n");
  for (c = (m+n-1); c >=0; c--) {
    printf("%d ", sorted[c]);
  }
  printf("\n");
  frequency(sorted,m+n);
  duplicate(arrcpy1,m+n);
  larger(arrcpy2,m+n);
  insert(arrcpy2,m+n);
  delect(arrcpy3,m+n);
  return 0;
}
//merging array
void merge(int a[], int m, int b[], int n, int sorted[]) {
  int i, j, k;
  j = k = 0;
  for (i = 0; i < m + n;) {
    if (j < m && k < n) {
      if (a[j] < b[k]) {
        sorted[i] = a[j];
        j++;
      }
      else {
        sorted[i] = b[k];
        k++;   }     i++;  }
    else if (j == m) {
      for (; i < m + n;) {
        sorted[i] = b[k];
        k++;
        i++; } }
    else {
      for (; i < m + n;) {
        sorted[i] = a[j];
        j++;
        i++; }    }  }
}
//frequency of each number
void frequency(int sort[],int size){
    int max=0,freq[1000],i,j;
    memset(freq,0,sizeof(freq));
    for(i=0;i<size;i++){
        freq[sort[i]]++;
        if(sort[i]>max)
            max=sort[i];
    }
    printf("Frequency of array elements--\n");
    for(i=0;i<=max;i++){
        if(freq[i]!=0)
            printf("%d %d\n",i,freq[i]); } }
//Eleminate duplicate element
void duplicate(int dup[],int size){
    int i,j,k;
     for (i = 0; i < size; i++) {
      for (j = i + 1; j < size;) {
         if (dup[j] == dup[i]) {
            for (k = j; k < size; k++) 
               dup[k] = dup[k + 1];
            size--;
         } else
            j++;}
   }
   printf("print except duplicate--\n");
   for (i = 0; i < size; i++) 
      printf("%d ", dup[i]);
   printf("\n");
//print larger element
void larger(int large[],int size){
    int input_number,i;
    printf("scan a number-\n");
    scanf("%d",&input_number);
    printf("Larger number-\n");
    for(i=0;i<size;i++){
        if(large[i]>input_number) 
            printf("%d ",large[i]);
    } printf("\n"); }
// insert element
void insert(int arr[],int size){
    int n, max, i;
    printf("postion you wanted to insert--");
        scanf("%d",&n);
    printf("Value for position--\n");
    scanf("%d", &max);
    for(i=size+1; i>n-1; i--){
        arr[i+1] = arr[i]; }
    arr[n] = max;
    printf("Array after insertion: \n");
    for(i=0;i<size+1;i++)
        printf("%d ", arr[i]);
    printf("\n");
}
//Delect an element
void delect(int arr[],int size)
{int i,loc;
    printf("\n location of the element to be deleted :\n");
   scanf("%d", &loc);
   for(i=loc+1;i<size;i++)
     arr[i-1]=arr[i];
   for (i=0;i<size-1;i++)
      printf("%d ",arr[i]);
   printf("\n"); }
