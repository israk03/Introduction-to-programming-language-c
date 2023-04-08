/* You are given an positive integer N. Now print the following sequence as shown 
below. 
 
For N=10 , the sequence should be //fibonacchi
0 1 1 2 3 5 8 13 21 34 
 
Sample Input 1: 	 	 	 	 	 	Sample Output 1: 
10  	 	 	 	 	 	 	 	 	0 1 1 2 3 5 8 13 21 34 
 */

#include<stdio.h>
int main(){
    int n, arr[1000], i, a, b;
    scanf("%d",&n);

    arr[0] = 0; 
    arr[1] = 1;

    for(i=2; i<n; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}