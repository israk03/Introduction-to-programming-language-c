#include<stdio.h>
int main()
{
    int a;
    printf("Please enter your mark: ");
    scanf("%d",&a);

    if (a<33){
        printf("F");
    }
    else if (33<=a && a<=39){
        printf("D");
    }
    else if (40<=a && a<=49){
        printf("C");
    }
    else if (50<=a && a<=59){
        printf("B");
    }
    else if (60<=a && a<=69){
        printf("A-");
    }
    else if (70<=a && a<=79){
        printf("A");
    }
    else if (80<=a && a<=100){
        printf("A+");
    }



    return 0;
}