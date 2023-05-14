#include<stdio.h>

double area(double b, double h)
{
    return 0.5 * b * h;
}

int main()
{
    double base, height;
    printf("Enter the base: ");
    scanf("%lf ", &base);
    printf("Enter the height: ");
    scanf("%lf ", &height);

    double res = area(base, height);

    printf("The area of this triangle is %.2lf.", res); 
    return 0;
}