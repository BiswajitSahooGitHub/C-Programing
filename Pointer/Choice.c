#include <stdio.h>
int add(int p, int q)
{
    return p + q;
}
int sub(int p, int q)
{
    return p - q;
}
int mul(int p, int q)
{
    return p * q;
}
int div(int r, int t)
{
    return r / t;
}
int main()
{
    int a = 10, b = 20, result,g;
    char choice;
    int (*func)(int, int);
    printf("Enter the operator: \t");
    scanf("%c", &choice);
    if (choice == '+')
    {
        func = &add;
        result = (*func)(10, 20);
        printf("Addition of two numbers: %d\n", result);
    }
    else if (choice == '-')
    {
        func = &sub;
        result = (*func)(10, 20);
        printf("Subtraction of two numbers: %d\n", result);
    }
    else if (choice == '*')
    {
        func = &mul;
        result = (*func)(10, 20);
        printf("Multiplication of two numbers: %d\n", result);
    }
    else if (choice == '/')
    {
        func = &div;
        g = (*func)(10,20);
        printf("Division of two numbers: %d\n", g);
    }
    return 0;
}