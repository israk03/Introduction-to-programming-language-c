/* 
print:
        *
        * *
        * * * 
        * * * *
        * * * * *
*/
#include<stdio.h>
int main(){
    int i,j;

    for(i=1; i<=5; i++){
        for(j=5; j<=i; j++){        // ei problem er ulta bhabe chaile (j=i; j<=5; j++) ei condition hoto
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}