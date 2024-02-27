#include <stdio.h>
#include <stdlib.h>
struct node {
    char data;
    struct node* left;
    struct node* right;
};
int find(char arr[], int initial, int fin, char value);
struct node* BSTnewNode(char data);
int find(char arr[], int initial, int fin, char value)
{
    int i;
    for (i = initial; i <= fin; i++)
    {
        if (arr[i] == value)
            return i;
    }
}
struct node* Tree(char in[], char pre[], int initial, int fin)
{
    static int prea = 0;
    if (initial > fin)
        return NULL;
    struct node* BSTnode = BSTnewNode(pre[prea++]);
    if (initial == fin)
        return BSTnode;
    int ina = find(in, initial, fin, BSTnode->data);
    BSTnode->left = Tree(in, pre, initial, ina - 1);
    BSTnode->right = Tree(in, pre, ina + 1, fin);
    return BSTnode;
}
struct node* BSTnewNode(char data)
{
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
void ino(char a[], char b[], int n)
{
	int root = find(a, 0, n, b[0]);
	if (root != 0)
		ino(a, b + 1, root);
		printf("%c ",b[0]);
	if (root != n - 1)
		ino(a + root + 1, b + root + 1, n - root - 1);
}
void PostOrder(char in[], char pre[], int n)
{
	int root = find(in, 0, n, pre[0]);
	if (root != 0)
		PostOrder(in, pre + 1, root);
	if (root != n - 1)
		PostOrder(in + root + 1, pre + root + 1, n - root - 1);
	printf("%c ",pre[0]);
}
int main()
{
	char a[100];
    printf("Enter a inord. line : ");
    scanf("%[^\n]s", &a);
    getchar();
    char b[100];
    printf("Enter preord. line: ");
    scanf("%[^\n]s", &b);
    getchar();
    int n;
    printf("Enter total no. of elements in the expression: ");
    scanf("%d",&n);
	printf("Postord. Expression are: \n");
	PostOrder(a, b, n);
	return 0;
}
