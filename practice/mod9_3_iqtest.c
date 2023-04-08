/* Input
The first line contains integer n (3 ≤ n ≤ 100) — amount of numbers in the task.
The second line contains n space-separated natural numbers, not exceeding 100. It is guaranteed,
that exactly one of these numbers differs from the others in evenness.

Output
Output index of number that differs from the others in evenness.
Numbers are numbered from 1 in the input order.

Examples
input                   input
5                       4
2 4 7 8 10              1 8 1 1
output                  output
3                       2

 */


#include<stdio.h>
int main(){
    int arr[100],n,i;
    int ec=0, oc=0;
    int ans; 

    printf("enter the array size: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        scanf("%d",&arr[i]);
    }

    for(i=1; i<=n; i++){
        if(arr[i]%2==0){
            ec++;
        }
        else{
            oc++;
        }
    }

    if(ec==1){
        for(i=1; i<=n; i++){
            if(arr[i]%2==0){
                ans = i;
            }
        }
    }
    else{
        for(i=1; i<=n; i++){
            if(arr[i]%2!=0){
                ans = i;
            }
        }
    }
    printf("%d",ans);
    return 0;
}