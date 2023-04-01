#include<stdio.h>
int main(){

    int n,a;
    printf("Please enter the num of terms: ");
    scanf("%d",&n);

    for(a=1; a<=n; a++){
        printf("Number is: %d and Square of the %d is: %d\n",a,a,a*a);

    }
    return 0;
}