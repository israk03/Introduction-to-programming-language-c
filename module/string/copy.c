// copy a string

#include<stdio.h>
#include<string.h>
int main()
{
    char main[] = "C learning";
    char copy[100];

    strcpy(copy,main);      // copy kore jetate rakhbo seta age,main string pore.

    printf("Copy string = %s",copy);
}