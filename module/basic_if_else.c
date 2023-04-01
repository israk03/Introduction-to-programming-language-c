#include<stdio.h>
int main()
{
    int x;
    printf("Please enter a number: ");
    scanf("%d", &x);

    if (x%2==0){
        printf("The number is even.\n");
    }
    else {
        printf("The number is odd.");
    }

    return 0;
}