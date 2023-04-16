#include<stdio.h>
int main(){
    int a[1000], n, i;

    printf("How many num: ");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    int max = a[0];

    for(i=0; i<n; i++){
        if(max < a[i]){                     // (min > a[i])
            max = a[i];
        }
    }
    printf("The maximum num is: %d",max);
    return 0;
}