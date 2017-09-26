#include<iostream>
#include<cstring>
#include<cstdlib>
#include<ctime>
using namespace std;
struct Company
{
  int id[50];
  char name [50][10];
  char designation [50][10];
  double salary [50];
  int link[50];
};
int main()
{
   int pointer[50]={0},l=0;
    Company rec;
    memset(rec.id,0,sizeof(rec.id));
    memset(rec.name,48,sizeof(rec.name));
    memset(rec.designation,48,sizeof(rec.designation));
    memset(rec.salary,0.00,sizeof(rec.salary));

    srand(time(NULL));
    cout<<"How many employees"<<endl;
    int employees;
    cin>>employees;
    cout<<endl;

    while(employees--)
    {
        int n=rand()%50+1
        while(rec.id[n]!=0)
             n=rand()%50+1;
        pointer[l]=n;
        rec.id[n]=n;
        cout<<"Enter the name and designation of the employee synchronisely."<<endl;
        cin>>rec.name[n];
        cout<<",";
        cin>>rec.designation[n];
        cout<<endl;
        rec.salary[n]=rand()%10000+1;
        l++;

    }
     cout<<"  ID"<<"\t"<<"NAME"<<"\t"<<"DESIGNATION"<<"\t"<<"SALARY"<<endl;
     int k=0;
     int j=pointer[k];
     while(j>0){
         cout<<k+1<<":"<<rec.id[j]<<"\t"<<rec.name[j]<<"\t"<<rec.designation[j]<<"\t""\t"<<rec.salary[j]<<endl;
         k++;
         j=pointer[k];}

    cout<<endl<<endl<<"Enter the name of the employee to increase the salary"<<endl;
    string name1;
    int q=0;
    cin>>name1;
    string name2;
    for(int i=0,m=pointer[i];m>0; ){
         name2=rec.name[m];
         if(name1==name2)
         {
           cout<<"Mr."<<name1<<" is an employee of this company."<<endl<<"His salary has increased from  "<<rec.salary[m]<<"  to  ";
           rec.salary[m]+=(rec.salary[m]*.1);
           cout<<rec.salary[m]<<endl;
           q=1;
           break;  }
      i++;
      m=pointer[i];   }
    if(q!=1)
    cout<<"Mr."<<name1<<"is not an employee of this company."<<endl;

  return 0;
}
