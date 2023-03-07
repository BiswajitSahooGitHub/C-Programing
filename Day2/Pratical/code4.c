#include<stdio.h>
void findCube(int num)
{
    int cube = num * num * num;
    printf("Cube of the given number is %d\n",cube);
}
void findCube2(void)
{
    int n;
    printf("Enter any number for 2nd methode:");
    scanf("%d",&n);
    int cube = n * n * n;
    printf("Cube of the given number is %d\n",cube);
}
int findCube3(void)
{
    int nu;
    printf("Enter any number for 3nd methode:");
    scanf("%d",&nu);
    int cube = nu * nu * nu;
    printf("Cube of the given number is %d\n",cube);
    return nu;
}
int findCube4(int num)
{
    int cube = num * num * num;
    printf("Cube of the given number using 4th method is %d\n",cube);
    return num;
}
int main() 
{
    int num;
    printf("Enter any number: \n");
    scanf("%d",&num);
    findCube(num);
    findCube2();
    findCube3();
    findCube4(num);
    return 0;
}