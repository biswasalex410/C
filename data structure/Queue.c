#include<stdio.h>#include<conio.h>int queue[100]={0},front=0,rear=0,n,item;int qinsert(int item){    //printf("\nin qi, f=%d and r=%d and n=%d\n",front,rear,n);    if((front==1&&rear==n)||(front==rear+1))    {        printf("OVERFLOW!!!");        return 0;    }    else if(front==0)    {        front=1;        rear=1;    }    else if(rear==n)    {        rear=1;    }    else    {        rear=rear+1;    }    queue[rear]=item;    printf("\nInsert succesfully.\n");    return 0;}int qdelete(){    if(front==0)    {        printf("\nUNDER FLOW!!");        return;    }    item=queue[front];    queue[front]=0;    if(front==rear)    {        front=0;        rear=0;    }    else if(front==n)    {        front=1;    }    else    {        front=front+1;    }    printf("\nDelete succesfully.\n");    return 0;}void display(){    int i;    printf("\nThe updated queue is:\n");    for(i=1;i<=n;i++)    {        printf("%d\t",queue[i]);    }}int main(){    char choice1,choice2;    printf("Enter the max size of the QUEUE:");    scanf("%d",&n);    do    {        printf("\n\n'I' for insert.\n'd' for delete.\n'p' for display.\nEnter your choice:");        choice1=getch();        if(choice1=='i'||choice1=='I')        {            printf("\nEnter a value for insert:");            scanf("%d",&item);            qinsert(item);            display();        }        else if(choice1=='p'||choice1=='P')        {            display();        }        else if(choice1=='d'||choice1=='D')        {            qdelete();            printf("\nThe deleted value is=%d",item);            display();        }        else        {            printf("\nInvaild choice.\nEnter Right one.\n");        }        printf("\n\n'y' for run again.\n 'n' for exit.\nEnter your choice:");        choice2=getch();    }while(choice2=='y'||choice2=='Y');    return 0;}