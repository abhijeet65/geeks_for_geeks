#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define size 3
int x=1;

typedef struct NODE
{
    int reg_no;
    int age;
    char name[20];
    struct NODE *next;
} node;

node* deq();
void create();
int reserve(node*);
int cancel(int);
void enq(node*);
void display();


node *start,*t;
node *front;
node *rear;
int count=0;
int num=0;

void create( )
{
    node *new;
    new=(node *)malloc(sizeof(node));
    new->reg_no=1;
    printf("Name: ");
    scanf("%s", new->name);
    printf("Age : ");
    scanf("%d", &new->age);
    start=new;
    new->next=NULL;
    num++;

}

int reserve(node *start)
{

    if(start==NULL)
    {
            create(start);
         return 1;
    }
    

    node *temp, *new_node;
    temp=start;
    while(temp->next!=NULL)
    {
      temp=temp->next;
    }

    new_node=(node *)malloc(sizeof(node));

    printf("Name: ");
    scanf("%s", new_node->name);
    printf("Age : ");
    scanf("%d", &new_node->age);
    new_node->next=NULL;
    if(num<size)
    {  
        num++;
        new_node->reg_no=++x;
        temp->next=new_node;
         
        return 1;
    }
   
        enq(new_node);
        return 0;

}


int cancel(int reg)
{
    node *ptr, *preptr, *nn,*t,*t1;
    ptr=start;
    preptr=NULL;
    if(start==NULL)
    return -1;
    if(ptr->next==NULL && ptr->reg_no==reg)
        {
        start=NULL;
        num=num-1;
        free(ptr);
        return 1;

        }
if(ptr->next!=NULL&&ptr->reg_no==reg){
t=start;
nn=deq(reg);
if(nn==NULL){
t1=start;
start=start->next;
free(t1);
--num;
return 1;
}
free(t);
nn->next=start->next;
start=nn;
--num;
return 1;

}

    while(ptr->reg_no!=reg && ptr->next!=NULL)
        {
            preptr=ptr;
            ptr=ptr->next;
        }
        if(ptr==NULL && ptr->reg_no!=reg)
            return -1;

            preptr->next=ptr->next;
        free(ptr);
        nn=deq(reg);
        while(preptr->next!=NULL)
            preptr=preptr->next;
        preptr->next=nn;
        --num;

        return 1;

    
}

void enq(node *new_node)
{
    if(rear==NULL)
    {
        rear=new_node;
        rear->next=NULL;
        front=rear;
num++;
    }
    else
    {
        node *temp;
        temp=new_node;
        rear->next=temp;
        temp->next=NULL;
        rear=temp;
num++;
    }
    count++;
}

node* deq(int reg)
{
    node *front1;
    front1=front;
    if(front==NULL)
        return NULL;
    else
    {
        count-- ;
        if(front->next!=NULL)
        {
            front=front->next;
            front1->reg_no=(char)reg;

            front1->next=NULL;

            return front1;
        }
        else
        {
             front1->reg_no=reg;
            front=NULL;
            rear=NULL;

            return front1;
        }
    }


}


void display()
{
    node *temp;
    temp=start;
    while(temp!=NULL)
    {
        printf("\nRegistration Number: %d\n", temp->reg_no);
        printf("Name : %s\n\n", temp->name);
        temp=temp->next;
    }

}

int main()
{
    int choice, status=0,canc=0, reg=0;
    start=NULL;
    rear=NULL;
    front=NULL;



    printf("\t\t\t***RAILWAY RESERVATION***\t\t\t\t\n");
    int ch =0;
    while(ch!=4)
    {
    printf("\n\nDo you want to - \n 1. Reserve a ticket? \n 2. Cancel Booking \n 3. Display passenger details \n 4. exit\n\n");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1 :  status=reserve(start);
                  if(status==0)
                    printf("\nBooking Full!! \nYou are added to waiting list. Waiting list number %d", count);
                  else
                    printf(" \nBooking Successful!!! Enjoy your journey! Your Reg No is %d\n\n", x);

                  break;

        case 2:   printf(" \n Give the Registration number to be cancelled\n");
                  scanf(" %d", &reg);
             
                  canc=cancel(reg);
                  if(canc==-1)
                      printf("\nRegistration number invalid!!\n");
                  else
                      printf("\nRegistration cancelled successfully\n");
                      
                  break;

        case 3: display();
        break;
        case 4: exit(0);
        break;
        default: printf("\nWrong choice!\n");




    }

}

}