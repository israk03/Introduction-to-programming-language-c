#include<stdio.h>
#include<limits.h>

int main(){

    int n;
    printf("please enter the size of array: ");
    scanf("%d",&n);

    int inp[1000], i;
    for(i=0; i<n; i++){
        scanf("%d",&inp[i]);
    }


    int min = inp[0];
    for(i=0; i<n; i++){
        if(min > inp[i]){
            min = inp[i];
        }
    }

    int arr[1000] = {0};
    for(i=0; i<n; i++){
        arr[inp[i] - min]++;
    }

    int count = 0;
    for(i=0; i<1000; i++){
        if(arr[i] > 0){
            count++;
        }
        if(count == 4){
            printf("The 4th minimum number is %d.", i + min);
            break;
        }
    }

    if(count < 4){
        printf("There are less than four distinct minimum values in the input array.");
    }

    return 0;
}
