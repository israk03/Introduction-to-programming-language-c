// print the 3rd largest

#include<stdio.h>
int main(){
    int n, inp[100], i;

    printf("please enter the array size: ");
    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d", &inp[i]);
    }
   
    int max = inp[0];

    for(i=0; i<n; i++){
        if(max < inp[i]){
            max = inp[i];
        }
    }

    int arr[max+1];
    for(i=0; i<=max; i++){
        arr[i] = 0
    }

    for(i=0; i<n; i++){        
        arr[inp[i;]] += 1;
    }

    int count = 0;
    for(i=max; i>=0; i--){
        if(arr[i] = 1){
            count += 1; 
        }
        if(count == 3){
            printf("3rd maximum number is: %d",i);
            break;
        }
    }



    return 0;
}