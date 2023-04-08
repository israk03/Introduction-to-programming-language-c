/* Write a C program to take one positive integer N, the size of an array as input.
Then take a positive integer array of size N as input and sort the array in ascending order.
It is guaranteed that the input array will contain distinct integers . 
 
Sample Input 1: 	 	 	 	 	 	 	 	 	Sample Output 1: 
 
5	                                                1 3 5 6 17   
 
6 1 5 3 17 
 */

#include<stdio.h>
int main(){
    int n, arr[100],i, j, temp;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}