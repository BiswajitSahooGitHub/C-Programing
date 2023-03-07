#include <stdio.h>
float SI(float p,float t,float r)
{
    printf("Simple Interest = %.2f\n",(p * t * r) / 100);
}
int main()
{
    float principle, time, rate;
    for(int i=1;i<=3;i++)
    {
        printf("Enter principle (amount): ");
        scanf("%f", &principle);
        printf("Enter time: ");
        scanf("%f", &time);
        printf("Enter rate: ");
        scanf("%f", &rate);
        SI(principle,time,rate);
    }
    return 0;
}