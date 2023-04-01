/* You need to take 4 distinct integer as input.
Print the largest and smallest among them. Distinct means all of them are separate integers.
None of them is equal to any other of them. */

#include<stdio.h>
int main(){

    int a,b,c,d;
    scanf("%d %d %d %d", &a,&b,&c,&d);

    if (a>b && a>c && a>d){
        printf("Largest number is %d\n",a);
    }
    else if (b>a && b>c && b>d){
        printf("Largest number is %d\n",b);
    }
    else if (c>a && c>b && c>d){
        printf("Largest number is %d\n",c);
    }
    else {
        printf("Largest number is %d\n",d);
    }

    if (a<b && a<c && a<d){
        printf("Smallest number is %d\n",a);
    }
    else if (b<a && b<c && b<d){
        printf("Smallest number is %d\n",b);
    }
    else if (c<a && c<b && c<d){
        printf("Smallest number is %d\n",c);
    }
    else {
        printf("Largest number is %d\n",d);
    }

    return 0;
}