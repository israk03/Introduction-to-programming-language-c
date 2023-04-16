// copy all elements of an array to another array:

#include<stdio.h>
int main(){
    int array1[5] = {1, 3, 5, 7, 9};
    int array2[5], i;

    printf("Array1: ");
    for(i=0; i<5; i++){
        printf("%d ",array1[i]);
    }

    for(i=0; i<5; i++){
        array2[i] = array1[i];
    }
    printf("\nArray2: ",array2);
    return 0;
}

// need  help