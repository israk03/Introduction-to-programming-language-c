#include<stdio.h>
int main()
{
    int x,y;

    printf("please enter your marks: ");
    scanf("%d",&x);

     printf("please enter your bonus marks: ");
    scanf("%d",&y);


    int total;
    total = x+y;

    if (total>=100){
        printf("yes");
    }
    else{
        printf("no");
    }




    return 0;
}