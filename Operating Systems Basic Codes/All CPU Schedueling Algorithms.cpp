#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

COORD coord = {0,0};
int number,id=0,quantum;
struct st
{
    int id,start,finish,arrival_time,service_time,service_time2,turnaround_time,waiting_time,last_run,priority;
}job[50];

vector<int>v,v2;

void sort_by_arrival_time();
void sort_by_service_time();
void sort_by_priority();
void fcfs(void);
void sjf(void);
void srtf(void);
void pr(void);
void rr(void);
void drawline(int,int);
void show_diagram();
int  show_output(int);
void gotoxy(int x, int y);
void sleep(unsigned int ms);
int  intput_at_st(int);
int  intput_st_pr(int);
int  intput_st_tq(int);
int  intput_st(int);
void ganttchart_fcfs_sjf_pr(int y);
void ganttchart_srtf(int y);
void ganttchart_rr(int y);

int main()
{
    int i,choice;
    while(1)
    {
        int x=5,y=10;
        system("cls");
        v.clear();
        v2.clear();
        cout<<"Job Scheduling algorithm list:"<<endl;
        cout<<" 1. First Come First Served (fcfs)."<<endl;
        cout<<" 2. Shortest Job First (sjf)."<<endl;
        cout<<" 3. srtf"<<endl;
        cout<<" 4. Priority Scheduling"<<endl;
        cout<<" 5. Round Robin Scheduling (RR)."<<endl;
        cout<<" 0. Exit."<<endl;
        cout<<"Your Choice: ";
        cin>>choice;
        if(!choice) break;
        switch(choice){
            case   1:
                cout<<"Enter total number of service:";
                cin>>number;
                y = intput_at_st(y);
                fcfs();
                x=20;
                gotoxy(x,y);
                cout<<"First Come First Served (fcfs) job scheduling."<<endl;
                y=show_output(y);
                ganttchart_fcfs_sjf_pr(y);
                break;

            case   2:
                cout<<"Enter total number of service:";
                cin>>number;
                y = intput_st(y);
                sjf();
                x=20;
                gotoxy(x,y);
                cout<<"Shortest Job First (sjf) job scheduling."<<endl;
                y=show_output(y);
                ganttchart_fcfs_sjf_pr(y);
                break;

            case   3:
                cout<<"Enter total number of service:";
                cin>>number;
                y = intput_at_st(y);
                srtf();
                x=15;
                gotoxy(x,y);
                cout<<"Shortest Remaining Time First (srtf) job scheduling."<<endl;
                y=show_output(y);
                ganttchart_srtf(y);
                break;

            case   4:
                cout<<"Enter total number of service:";
                cin>>number;
                y = intput_st_pr(y);
                pr();
                x=30;
                gotoxy(x,y);
                cout<<"Priority Scheduling."<<endl;
                y=show_output(y);
                ganttchart_fcfs_sjf_pr(y);
                break;

            case   5:
                cout<<"Enter total number of service:";
                cin>>number;
                y = intput_st_tq(y);
                rr();
                x=25;
                gotoxy(x,y);
                cout<<"Round Robin job scheduling."<<endl;
                y=show_output(y);
                ganttchart_rr(y);
                break;

            default :
                cout<<" Sorry wrong choice. Please try again."<<endl;
                sleep(3000);
                continue;
                break;
        }

        cout<<endl<<endl<<"Press [Enter] to continue............";
        char ch;
        getchar();
        scanf("%c",&ch);
    }

}

void gotoxy(int x, int y){
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void sleep(unsigned int ms){
    clock_t goal=ms+clock();
    while(goal>clock());
}

void drawline(int y,int length){
    int i,x=5;
    gotoxy(x,y);
    for( i=0;i<length;i++ ){
        cout<<'=';
        sleep(2);
    }
}

int show_output(int y){
    int x=5,n;
    y+=2;
    drawline(y-1,70);
    gotoxy(x+5,y); cout<<"Process";
    gotoxy(x+15,y); cout<<"Waiting time";
    gotoxy(x+30,y); cout<<"Turnaround time";
    gotoxy(x+50,y); cout<<"Finish time";
    drawline(y+1,70);
    y+=2;
    int i;x=7;
    for(i=1;i<=number;i++){
        gotoxy(x+5,y); cout<<"P"<<job[i].id;
        gotoxy(x+15,y); cout<<job[i].waiting_time;
        gotoxy(x+30,y); cout<<job[i].turnaround_time;
        gotoxy(x+50,y); cout<<job[i].finish;
        y++;
    }
     drawline(y,70);
     return y+4;
}

int intput_at_st(int y){
    int x=5,i;
    drawline(y-1,45);
    gotoxy(x+3,y); cout<<"Process";
    gotoxy(x+15,y); cout<<"Arrival time";
    gotoxy(x+30,y); cout<<"Service time";
    drawline(y+1,45);
    x=8;y+=2;
    for(i=1;i<=number;i++){
        gotoxy(x,y); cout<<"P"<<i;
        gotoxy(x+15,y); cin>>job[i].arrival_time;
        gotoxy(x+30,y); cin>>job[i].service_time;
        job[i].id=i;
        job[i].service_time2=job[i].service_time;
        y++;
    }
    drawline(y,45);
    return y+4;
}

int intput_st_pr(int y){
    int x=5,i;
    drawline(y-1,45);
    gotoxy(x+3,y); cout<<"Process";
    gotoxy(x+15,y); cout<<"Service time";
    gotoxy(x+30,y); cout<<"Priority";
    drawline(y+1,45);
    x=8;y+=2;
    for(i=1;i<=number;i++){
        gotoxy(x,y); cout<<"P"<<i;
        gotoxy(x+15,y); cin>>job[i].service_time;
        gotoxy(x+30,y); cin>>job[i].priority;
        job[i].id=i;
        job[i].service_time2=job[i].service_time;
        y++;
    }
    drawline(y,45);
    return y+4;
}

int intput_st_tq(int y){
    int x=5,i;
    drawline(y-1,30);
    gotoxy(x+3,y); cout<<"Process";
    gotoxy(x+15,y); cout<<"Service time";
    drawline(y+1,30);
    x=8;y+=2;
    for(i=1;i<=number;i++){
        gotoxy(x,y); cout<<"P"<<i;
        gotoxy(x+15,y); cin>>job[i].service_time;
        job[i].id=i;
        job[i].service_time2=job[i].service_time;
        y++;
    }
    drawline(y,30);
    cout<<endl<<"        Time quantum:  ";
    cin>>quantum;
    y+=2;
    drawline(y,30);
    return y+4;
}

int intput_st(int y){
    int x=5,i;
    drawline(y-1,30);
    gotoxy(x+3,y); cout<<"Process";
    gotoxy(x+15,y); cout<<"Service time";
    drawline(y+1,30);
    x=8;y+=2;
    for(i=1;i<=number;i++){
        gotoxy(x,y); cout<<"P"<<i;
        gotoxy(x+15,y); cin>>job[i].service_time;
        job[i].id=i;
        job[i].service_time2=job[i].service_time;
        y++;
    }
    drawline(y,30);
    return y+4;
}

void ganttchart_fcfs_sjf_pr(int y){
    gotoxy(5,y-1);
    cout<<endl<<"     Gantt Chart:"<<endl;
    drawline(y+1,100);
    int i;
    cout<<endl<<"     ";
    for(i=1;i<=number;i++){
      cout<<"| "<<job[i].start<<" | P"<<job[i].id<<" ";
    }
    cout<<"| "<<job[number].finish<<" |"<<endl;
    drawline(y+3,100);
}

void ganttchart_srtf(int y){
    gotoxy(5,y-1);
    cout<<endl<<"     Gantt Chart:"<<endl;
    drawline(y+1,100);
    int i,cnt;
    cout<<endl<<"     ";
    cnt=0;
    for(i=0;i<v.size();i++){
      if(i==0||v[i]!=v[i-1]){
          cout<<"| "<<cnt<<" | P"<<job[v[i]].id<<" ";
      }
      cnt++;
    }
    cout<<"| "<<cnt<<" |";
    drawline(y+3,100);
}

void ganttchart_rr(int y){
    gotoxy(5,y-1);
    cout<<endl<<"     Gantt Chart:"<<endl;
    drawline(y+1,100);
    int i,cnt,d;
    cout<<endl<<"     ";
    cnt=0;d=0;
    for(i=0;i<v2.size();i++){
      if(i==0||v2[i]!=v2[i-1]||d>=quantum){
          d=0;
          cout<<"| "<<cnt<<" | P"<<job[v2[i]].id<<" ";
      }
      d++;
      cnt++;
    }
    cout<<"| "<<cnt<<" |";
    drawline(y+3,100);
}

void fcfs(void){
    int i,j,cpu_free_at;
    sort_by_arrival_time();
    cpu_free_at=0;
    for(i=1;i<=number;i++){
        if(cpu_free_at<=job[i].arrival_time){
            job[i].waiting_time=0;
            job[i].start=job[i].arrival_time;
            job[i].finish=job[i].start+job[i].service_time;
            cpu_free_at=job[i].finish;
            job[i].turnaround_time=job[i].service_time;
        }
        else{
            job[i].waiting_time=cpu_free_at-job[i].arrival_time;
            job[i].start=cpu_free_at;
            job[i].finish=job[i].start+job[i].service_time;
            cpu_free_at=job[i].finish;
            job[i].turnaround_time=job[i].waiting_time+job[i].service_time;
        }
    }

}

void sjf(void){
    int i,j,cpu_free_at;
    sort_by_service_time();
    cpu_free_at=0;
    for(i=1;i<=number;i++){
        job[i].waiting_time=cpu_free_at;
        job[i].start=cpu_free_at;
        job[i].finish=job[i].start+job[i].service_time;
        cpu_free_at=job[i].finish;
        job[i].turnaround_time=job[i].waiting_time+job[i].service_time;
    }
}

void srtf(void){
    int i,j;
    for(i=1;i<=number;i++)
        job[i].last_run=-1;
    for(i=0;i<=1000;i++){
        int idx=-1;
        for(j=1;j<=number;j++){
            if(job[j].arrival_time<=i&&job[j].service_time>0){
                idx=j;
                break;
            }

        }
        if(idx!=-1){
            for(j=1;j<=number;j++){
                if(job[j].arrival_time<=i&&job[j].service_time>0&&job[j].service_time<job[idx].service_time){
                    idx=j;
                }
            }
            if(job[idx].last_run==-1){
                job[idx].waiting_time=i-job[idx].arrival_time;
                job[idx].last_run=i;
                job[idx].service_time--;
                if(job[idx].service_time==0)
                    job[idx].finish=i+1;
            }
            else{
                job[idx].waiting_time+=i-job[idx].last_run-1;
                job[idx].last_run=i;
                job[idx].service_time--;
                if(job[idx].service_time==0)
                    job[idx].finish=i+1;
            }
            v.push_back(idx);
        }
    }
    for(i=1;i<=number;i++){
        job[i].turnaround_time=job[i].waiting_time+job[i].service_time2;
    }
}

void pr(void){
    int i,j,cpu_free_at;
    sort_by_priority();
    cpu_free_at=0;
    for(i=1;i<=number;i++){
        if(cpu_free_at<=job[i].arrival_time){
            job[i].waiting_time=0;
            job[i].start=job[i].arrival_time;
            job[i].finish=job[i].start+job[i].service_time;
            cpu_free_at=job[i].finish;
            job[i].turnaround_time=job[i].service_time;
        }
        else{
            job[i].waiting_time=cpu_free_at-job[i].arrival_time;
            job[i].start=cpu_free_at;
            job[i].finish=job[i].start+job[i].service_time;
            cpu_free_at=job[i].finish;
            job[i].turnaround_time=job[i].waiting_time+job[i].service_time;
        }
    }

}

void rr(void){
    deque<int>Q;
    int i,cnt;
    for(i=1;i<=number;i++){
        Q.push_back(i);
        job[i].last_run=-1;
        job[i].waiting_time=0;
    }
    cnt=0;
    while(!Q.empty()){
        i=Q.front();
        Q.pop_front();
        if(job[i].last_run==-1){
            job[i].waiting_time=cnt;
        }
        else{
            job[i].waiting_time+=cnt-job[i].last_run;
        }
        if(job[i].service_time>quantum){
            job[i].service_time-=quantum;
            job[i].last_run=quantum+cnt;
            Q.push_back(i);
            cnt+=quantum;
            for(int j=0;j<quantum;j++)
                v2.push_back(i);
        }
        else{
            job[i].finish=cnt+job[i].service_time;
            cnt+=job[i].service_time;
            for(int j=0;j<job[i].service_time;j++)
                v2.push_back(i);
        }
    }
    for(i=1;i<=number;i++){
        job[i].turnaround_time=job[i].waiting_time+job[i].service_time2;
    }
}

void sort_by_arrival_time(void){
    int i,j;
    st temp;
    for(i=1;i<=number;i++){
        for(j=i+1;j<=number;j++){
            if(job[i].arrival_time>job[j].arrival_time){
                temp=job[i];
                job[i]=job[j];
                job[j]=temp;
            }
            else if(job[i].arrival_time==job[j].arrival_time){
                if(job[i].id>job[j].id){
                    temp=job[i];
                    job[i]=job[j];
                    job[j]=temp;
                }
            }
        }
    }
}

void sort_by_service_time(void){
    int i,j;
    st temp;
    for(i=1;i<=number;i++){
        for(j=i+1;j<=number;j++){
            if(job[i].service_time>job[j].service_time){
                temp=job[i];
                job[i]=job[j];
                job[j]=temp;
            }
            else if(job[i].service_time==job[j].service_time){
                if(job[i].arrival_time<job[j].arrival_time){
                    temp=job[i];
                    job[i]=job[j];
                    job[j]=temp;
                }
            }
        }
    }
}
void sort_by_priority(void){
    int i,j;
    st temp;
    for(i=1;i<=number;i++){
        for(j=i+1;j<=number;j++){
            if(job[i].priority>job[j].priority){
                temp=job[i];
                job[i]=job[j];
                job[j]=temp;
            }
            else if(job[i].priority==job[j].priority){
                if(job[i].id>job[j].id){
                    temp=job[i];
                    job[i]=job[j];
                    job[j]=temp;
                }
            }
        }
    }
}
