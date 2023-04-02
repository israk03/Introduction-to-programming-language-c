/* Take two integers as input and print their GCD as the output.
We know, GCD of two numbers is the greatest common divisor of two numbers.
You can use the logic from Question no. 6 to solve this problem. 
Sample Input 1: 
12 18 
Sample Output 1: 
The GCD of 12 and 18 is 6. 
Explanation: 
Since 6 is the largest number which divides both 12 and 18 so 6 is output.
 */

#include<stdio.h>
int main(){
    int num1, num2, n1, n2, gcd, rem;
    scanf("%d %d", &num1, &num2);

    n1 = num1;
    n2 = num2;

    while (n2 != 0){
        rem = n1%n2;
        n1 = n2;
        n2 = rem;
    }
    gcd = n1;
    printf("The GCD of %d and %d is %d.",num1, num2, gcd);
    return 0;
}