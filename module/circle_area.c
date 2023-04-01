#include<stdio.h>
int main()
{
    int rad;
    printf("Please enter the radius of circle: ");
    scanf("%d", &rad);

    float area;
    area = 3.1416*rad*rad;
    printf("The area of this circle is %f", area);


    return 0;
}