#include<stdio.h>
int main(){
    int n,i,sum=0;

    printf("Please enter the num of terms: ");
    scanf("%d",&n);

    printf("The first %d natural num are: ",n);
    for(i=1; i<=n; i++){
        sum=sum+i;
        printf("%d ",i);
    }

    printf("\nThe sum of natural num %d terms is: %d",n,sum);

    return 0;
}