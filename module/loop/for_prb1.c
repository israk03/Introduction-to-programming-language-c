// write a c program for loop which will print the following numbers:
/* 100 90 80 ..... 0 */


#include<stdio.h>
int main()
{
    int i;

    for(i=100; i>=0; i=i-10){
        printf("%d\n",i);
    }



    return 0;
}