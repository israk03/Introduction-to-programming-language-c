#include<stdio.h>

int square(int a)
{
    return a*a;
}

int main()
{
    int num; 
    printf("Enter a integer number: "); 
    scanf("%d",&num);

    int result = square(num);

    printf("The square of this number is %d\n",result);

    return 0;
}