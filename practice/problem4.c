#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d", &a, &b);

    int sum;
    sum = a+b;
    printf( "%d ", sum);

    int dif;
    dif = a-b;
    printf( "%d ", dif);

    int mul;
    mul = a*b;
    printf( "%d ", mul);


    return 0;
}