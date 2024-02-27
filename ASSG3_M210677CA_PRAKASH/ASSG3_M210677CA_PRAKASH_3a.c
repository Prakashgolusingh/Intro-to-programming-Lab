#include<stdio.h>
void main()
{
    void ComputTotalSalary(int);
    int basic_salary;
    printf("enter the Employee's basic salary : ");
    scanf("%d",&basic_salary);
    ComputTotalSalary(basic_salary);
}
void ComputTotalSalary(int a)
{
    float b;
    if(a<1500)
    {
        b=a+(a*0.1)+(a*0.9);
    }
    else
        b=a+500+(a*0.98);
    printf("output : %.2f",b);
}
