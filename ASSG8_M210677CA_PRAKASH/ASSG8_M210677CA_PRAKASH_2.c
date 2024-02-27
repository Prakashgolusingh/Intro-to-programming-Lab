#include <stdio.h>
#include <stdlib.h>
struct BSTnode {
    int data;
    struct BSTnode *left, *right;
};
struct BSTnode* create_BSTnode(int item)
{
    struct BSTnode* temp
        = (struct BSTnode*)malloc(sizeof(struct BSTnode));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}
struct BSTnode* insert(struct BSTnode* T, int data)
{
    if (T == NULL)
        return create_BSTnode(data);
    if (data < T->data)
        T->left = insert(T->left, data);
    else if (data > T->data)
        T->right = insert(T->right, data);
    return T;
}
void searching( struct BSTnode *root , int key , struct  BSTnode *parent )
{
    if (root == NULL)
    {
        printf("Key is not found\n");
        return;
    }
    if ( (root->data) == key )
    {
        if ( parent == NULL )
            printf("The node with key %d is root node",key);
        else if ( key < parent->data )
            printf("The given key is the left node of the node %d",parent->data);
        else
            printf("The given key is the right node of the node %d",parent->data);
        return;
    }
    if (key < root->data)
        searching(root->left, key, root);
    else
        searching(root->right, key, root);
}
void main()
{
    int a=1,b,c;
    struct BSTnode*T=NULL;
    printf("enter your no : ");
    scanf("%d",&b);
    T=insert(T,b);
    printf("enter 1 for continue : ");
    scanf("%d",&a);
    while(a!=0)
    {
        printf("enter your no : ");
        scanf("%d",&b);
        insert(T,b);
        printf("enter 1 for continue : ");
        scanf("%d",&a);
    }
    printf("the key to be searched is : ");
    scanf("%d",&c);
    searching(T,c,NULL);
}
