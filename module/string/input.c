#include<stdio.h>
#include<string.h>
int main()
{
    char n1[100];

    printf("Enter your name: ");
    gets(n1);               // scanf er poriborte gets function use korle input nite problem hobe na.

    printf("Your name is %s\n",n1);

}