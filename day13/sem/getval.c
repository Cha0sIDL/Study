
#include<stdio.h>
#include<stdlib.h>
#include<sys/ipc.h>
#include<sys/sem.h>
#include<string.h>
int main(void)
{
    int id=semget(1234,0,0);
    if(id==-1)perror("semget"),exit(1);
    int val=semctl(id,0,GETVAL);
    printf("va=%d\n",val);
}
