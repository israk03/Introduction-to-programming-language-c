#include<stdio.h>

void display(int a[])
{
    int i; 
    for(i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    int ara[] = {1,2,3,4,5};
    
    display(ara);
}