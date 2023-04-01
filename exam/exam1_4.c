/* you need to find the sum of the digits of the input. So look at the sample input output. 
Sample Input: 
2346167 
Sample Output: 
29 
Explanation: Since, the sum of the digits is 2+3+4+6+1+6+7 = 29. So the output is 29. 
 */

#include<stdio.h>
int main(){

    int num, digit, sum=0;
    scanf("%d",&num);

    while(num>0){
        digit = num % 10;
        
        sum = sum + digit;
        num = num / 10;

    } 
    printf("%d\n",sum);
    return 0;
}
123
loop er digit er modde ase 3
loop er modde sum er value 0+3=3