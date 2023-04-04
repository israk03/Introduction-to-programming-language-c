#include<stdio.h>
int main()
{
    int x,y;
    printf("Please enter two numbers: ");
    scanf("%d%d",&x, &y);

    if (x>y){

        printf("The large number is %d.",x);
    }
    else if (y>x){

        printf("The large number is %d.",y);
    }
    else {

        printf("They are equal.");
    }



    return 0;
}