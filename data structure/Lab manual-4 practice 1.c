#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*prev;
    struct node*next;
}*start=NULL,*tail;

void dl_create()
{
    int num,i;
    struct node*new_node,*current;
    printf("Enter the num of nodes:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value of data:");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        new_node->prev=NULL;
        if(start==NULL&&tail==NULL)
        {
            start=new_node;
            tail=new_node;
            current=new_node;
        }
        else
        {
            current->next=new_node;
            new_node->prev=current;
            current=new_node;
            tail=new_node;
        }
    }
}

void f_display()
{
    struct node*current;
    current=start;
    printf("\n For forward display:\n");
    while(current!=NULL)
    {
        printf("%d--",current->data);
        current=current->prev;
    }
    printf("NULL");
}

 void b_display()
 {
     struct node*current;
     current=tail;
     printf("\n For backward display:\n");
     while(current!=NULL)
     {
         printf("%d<--",current->data);
         current=current->prev;
     }
     printf("NULL");
 }

  void f_insert()
  {
      struct node*new_node,*current;
      new_node=(struct node*)malloc(sizeof(struct node));
      printf("\n Enter the value of first data:");
      scanf("%d",&new_node->data);
      new_node->next=NULL;
      new_node->prev=NULL;
      current=start;
      new_node->next=NULL;
      current->prev=new_node;
      start=new_node;
  }

void l_insert()
