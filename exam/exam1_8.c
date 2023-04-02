/* Take two integers as input and print their LCM as the output.
We know, LCM of two numbers is the least common multiple of two numbers.
You can use the logic from Question no. 6 to solve this problem. 
Sample Input 1: 
12 18 
Sample Output 1: 
The LCM of 12 and 18 is 36. 
Explanation: 
Since 36 is the least number which is divisible by both 12 and 18 so 36 is the output. 
 */

#include<stdio.h>
int main(){
    int num1, num2, n1, n2, rem, gcd, lcm;
    scanf("%d %d", &num1, &num2);
    n1 = num1;
    n2 = num2;
    while (n2 != 0){
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    gcd = n1;
    lcm = (num1*num2)/gcd;

    printf("The LCM of %d and %d is %d.", num1, num2, lcm);
    return 0;

}
