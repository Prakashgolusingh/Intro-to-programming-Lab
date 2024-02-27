#include<stdio.h>
#include<time.h>
int a;
void main()
{
    FILE *fp;
    fp=fopen("f4.txt","w");
    printf("n         time");
    int c;
    for(c=80;c<=420;c=c+40)
    {
        printf("\n");
        int array1[c][c],array2[c][c],array3[c][c];
        clock_t a,b,time;
        a=clock();
        multiplication(array1,array2,array3,c);
        b=clock();
        time=(double)(b-a);
        fprintf(fp,"%d   %li\n",c,time);
        printf("%d \t  %li",c,time);

    }
}
void multiplication(int array1[a][a],int array2[a][a],int array3[a][a],int a)
{
    for(int d=0;d<a;d++)
    {
        for(int f=0;f<a;f++)
        {
            int k=0;
            for(int e=0;e<a;e++)
            {
                k=k+(array1[d][e]*array2[e][f]);
            }
            array3[d][f]=k;
        }
    }
}
