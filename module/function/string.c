#include<stdio.h>

void display(char a[])
{
    int i = 0; 
    while(a[i] != '\0')
    {
        printf("%c", a[i]);
        i++;
    }
}

int main()
{
    char str[] = "ISRAK";           // output e problem

    display(str);

    return 0;
}