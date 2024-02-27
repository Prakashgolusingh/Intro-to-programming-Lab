#include <stdio.h>
#include <stdlib.h>
struct BSTnode
{
    int data;
    struct BSTnode *left, *right;
};
struct BSTnode* create_BSTnode(int x)
{
    struct BSTnode* temp=(struct BSTnode*)malloc(sizeof(struct BSTnode));
    temp->data = x;
    temp->left = temp->right = NULL;
    return temp;
}
void inorder(struct BSTnode* T)
{
    if (T != NULL) {
        inorder(T->left);
        printf("%d ", T->data);
        inorder(T->right);
    }
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
main()
{
    int a=1,b,c;
    struct BSTBSTnode*T=NULL;
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
    inorder(T);
}
