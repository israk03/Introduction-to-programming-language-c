#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d%d%d", &A, &B, &C);

    if (A>B && A>C){
        printf("A is bigger.");
    }
    else if (B>A && B>C){
        printf("B is bigger.");
    }
    else if (C>A && C>B){
        printf("C is bigger.");
    }
    else if (A==B){
        printf("A and B both are bigger.");
    }
    else if (B==C){
        printf("B and C both are bigger.");
    }
    else if (C==A){
        printf("C and A both are bigger.");
    }
    else{
        printf("They are equal.");
    }


    return 0;
}