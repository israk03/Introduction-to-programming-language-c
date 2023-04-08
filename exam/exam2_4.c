/* Write a C program to take one positive integer N,
the size of an array as input. Then take a positive integer array of size N.
And next line will contain k . Now find the k-th smallest element from the array. 
 	 
Sample Input: 	  	 	 	 	Sample Output: 
6  	 	 	 	 	 	 	 	6   
6 25 1 4 9 17 	 
3 	 	 	 	 	 	 	  	 	 	 	 
Explanation – For the above test case k=3 means you need to find the 3rd smallest element from the array 
 */

#include<stdio.h>
int main(){
    int n, arr[1000], i,k;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
}