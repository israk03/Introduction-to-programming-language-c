/* Write a C program to take one positive integer N,the size of an array as input.
Then take an integer array of size N as input and show output in reverse order.  
 
Sample Input:  	 	 	 	 	Sample Output: 
5 	 	 	 	 	 	 	 	5 10 3 20 1 
1 20 3 10 5  */

#include<stdio.h>
int main(){
    int a[500],i,n;

    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    for(i=(n-1); i>=0; i--){
        printf("%d ",a[i]);
    }
    return 0;
}