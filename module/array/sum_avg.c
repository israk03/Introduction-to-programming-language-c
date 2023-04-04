#include<stdio.h>
int main(){
    int a[1000], sum=0, n, i;

    printf("How many numbers: ");
    scanf("%d",&n);

    for(i=0; i<n; i++){             // for input
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++){
        sum = sum + a[i];
    }

    printf("The sum is : %d\n", sum);
    printf("The average is : %.2f",(float) sum/n);

    return 0;
}