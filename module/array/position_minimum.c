// 4th minimum position

#include<stdio.h>
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
        if(min>inp[i]){
            min = inp[i];
        }
    }

    int arr[min+1];
    for(i=0; i<=min; i++){
        arr[inp[i]] = 0;
    }

    for(i=0; i<n; i++){
        arr[inp[i]] +=1;
    }

    int count = 0;
    for(i=0; i<min; i++){
        if(arr[i]=1){
            count += 1;
        }
        if(count==4){
            printf("the 4th minimum no is %d.",i);
            break;
        }
    }
    return 0;
}