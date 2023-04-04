/* print:
        * * *
        * * * */

#include<stdio.h>
int main(){

    int a,b;

    for(a=1; a<=2; a++){            // ei loop ta use kora hoiche koyta line hobe setar jonno
        for(b=1; b<=3; b++){        // ei loop ta use kora hoiche * print korar jonno
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}