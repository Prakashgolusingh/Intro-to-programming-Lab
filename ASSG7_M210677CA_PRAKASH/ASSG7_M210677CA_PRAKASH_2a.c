
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *next;
};
struct node *stack1,*stack2;
struct node *temp;
struct node* create_node()
{

     temp=(struct node *)malloc(sizeof(struct node));
     return temp ;
}
void main()
{
    int n,b=1,c=0,d,e;
    void print();
    int pop(struct node **);
    void push(struct node **,int);
    while (b)
    {
        printf("enter your disk radius : ");
        scanf("%d",&n);
        c++;
        printf("enter 1 for countinue : ");
        scanf("%d",&b);
        push(&stack1,n);
    }
    for(int d=0;d<c;d++)
    {
        e=largest();
        push(&stack2,e);
        delnode(&stack1,e);
    }
    printf("sorted disk is : ");
    print();
}
void print()
{
    temp=stack2;
    while(temp!=0)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
}
int largest()
{
    temp=stack1;
    int b=0;
    while(temp!=0)
    {
        if(b< temp->data)
            b=((temp)->data);
        temp=temp->next;
    }
    return b;
}

void delnode(struct Node** a, int b)
{
    struct node*prev;
    temp = *a;
    if (temp != 0 && temp->data == b) {
        *a = temp->next;
        free(temp);
        return;
    }
    while (temp != 0 && temp->data != b) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == 0)
        return;
    prev->next = temp->next;

    free(temp);
}
void push(struct node **a,int inpt)
{
    struct node *n;
    n= create_node();
    n->data=inpt;
    n->next=*a;
    *a=n;
}
