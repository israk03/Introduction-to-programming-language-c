#include<stdio.h>

void power(double b, double e)
{
    double result = 1, i;
    for(i=1; i<=e; i++)
    {
        result = result * b; 
    }
    printf("The result is %.2lf\n.", result);
}

int main()
{
    double base, exp;
    printf("Enter the base: ");
    scanf("%lf",&base);
    printf("Enter the exponent: ");
    scanf("%lf",&exp);

    power(base, exp);
}