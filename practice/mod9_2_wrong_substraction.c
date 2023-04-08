/* if the last digit of the num is non zero, decrease the num by one
if the last digit of the num is zero, remove the last digit (divides the num 10) */

#include<stdio.h>
int main(){
    int n,k,i;
    scanf("%d %d", &n, &k);

    for(i=0; i<k; i++){         //k times loop ta cholbe
        if(n%10==0){
            n = n/10;
        }
        else{
            n = n--;
        }
    }
    printf("Final wrong substraction is: %d",n);
    return 0;
}