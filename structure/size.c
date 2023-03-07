#include<stdio.h>
struct Emp
{
    int empno;
    float sal;
    char ename;
}employee;
int main()
{
    printf("Size of the structer: %d \n",sizeof(employee));
    return 0;
}
