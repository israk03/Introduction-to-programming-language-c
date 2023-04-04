#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    while (a>1){

        printf("-->%d\n",a);

        if (a%2==0){
            a = a/2;
        }
        else {
            a = a*3+1;
        }
    }