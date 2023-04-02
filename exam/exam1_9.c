/* Write a C program to print all the factors of a number taken as input.
Sample Input 1: 
12 
Sample Output 1: 
The factors of 12 are: 1, 2, 3, 4, 6, 12. 
Sample Input 2: 
39 
Sample Output 2: 
The factors of 39 are: 1, 3, 13, 39. 
 */

#include<stdio.h>
int main(){
    int a, i;
    scanf("%d",&a);
    printf("The factors of %d are: ", a);
    for (i=1; i<=a; i++){
        if (a % i == 0){
            printf("%d, ", i);
        }
    }
    printf("\n");
    return 0;
}