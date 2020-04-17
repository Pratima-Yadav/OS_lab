#include<unistd.h>
#include<stdio.h>
#include<pthread.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<fcntl.h>
#include<stdbool.h>
void*func1();
void*func2();
intturn;
boolflag[2];
intmain()
{
pthread_tv1,v2;
pthread_create(&t1,NULL,func1,NULL);
pthread_create(&t2,NULL,func2,NULL);
pthread_join(t1,NULL);
pthread_join(t2,NULL);

NAME:lakhwindersingh REGISTRATIONNUMBER:11809257
ROLLNO:62 QUESTIONNO:6

printf("\ntaskcompleted\n");
}
void*func1()
{
flag[0]=true;
printf("flagofP0-True\n\n");
if(turn!=0||flag[0]==false)
{
printf("process0inwaiting\n\n");
wait;
turn=0;
flag[0]=true;
}
printf("process0excuted\n\n\n");
turn=1;
flag[0]=false;
}
void*fun2()
{
flag[1]=true;
printf("flagofp1-True\n\n");
if(turn!=1||flag[1]=false)
{
printf("process1iswaiting\n\n\n");
wait;
turn=
flag[1]=true;
}
printf("process1executed\n\n\n");
turn=0;
flag[1]=false;

}
