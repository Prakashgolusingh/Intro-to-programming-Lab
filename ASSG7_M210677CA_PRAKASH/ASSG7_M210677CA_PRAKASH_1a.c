#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *stack,*temp;
struct node* create_node()
{
     temp=(struct node *)malloc(sizeof(struct node));
     return temp ;
}
void main()
{
    int n,b,c,d;
    printf("no of query : ");
    scanf("%d",&b);
    for (c=0;c<b;c++)
    {
        printf("enter 1 for enqueue and 2 for dequeue");
        scanf("%d",&n);
        if(n==1)
        {
            printf("enter no for enqueue : ");
            scanf("%d",&d);
            enqueue(&stack,d);
        }
        if(n==2)
            deque(&stack);
    }
    if(stack!=0)
        printf("output : ");
    print();
}
void print()
{
    temp=stack;
    while(temp!=0)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
}
int deque(struct node **a)
{
    if(*a!=0)
    {
        temp=*a;
        *a=temp->next;
    }
    else
        printf("no element in queue");
}
void enqueue(struct node **a,int inpt)
{
    struct node *n;
    n= create_node();
    n->data=inpt;
    n->next=*a;
    *a=n;
}
