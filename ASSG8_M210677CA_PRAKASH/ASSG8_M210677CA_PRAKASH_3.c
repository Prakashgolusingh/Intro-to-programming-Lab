#include <stdio.h>
#include <stdlib.h>
struct BSTnode {
    int data;
    struct BSTnode *left, *right;
};
struct BSTnode *root = NULL,*w,*nodePO=NULL;
struct BSTnode *insert(struct BSTnode*,int);
struct BSTnode* create_node(int item)
{
    struct BSTnode* temp= (struct BSTnode*)malloc(sizeof(struct BSTnode));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}
void inorder(struct BSTnode* T)
{
    if (T != NULL)
    {
        inorder(T->left);
        printf("%d ", T->data);
        int temp = T->data;
        root = insert(root , temp);
        inorder(T->right);
    }
}
void postorder(struct BSTnode* w)
{
    if (w != NULL)
    {
        postorder(w->left);
        postorder(w->right);
        printf("%d ", w->data);
    }
}
struct BSTnode* insert(struct BSTnode* T, int data)
{
    if (T == NULL)
        return create_node(data);
    if (data < T->data)
        T->left = insert(T->left, data);
    else if (data > T->data)
        T->right = insert(T->right, data);
    return T;
}
void main()
{
    int a=1,b,c=0;
    struct BSTnode*T=NULL,*W;
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
        c++;
    }
    printf("In-order Traversal of T : ");
    inorder(T);
    printf("\npost-order Traversal of T : ");
    postorder(root);
}

