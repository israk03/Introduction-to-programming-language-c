/* input:                  input:
    3                       2
    1 1 0                   1 0 0
    1 1 1                   0 1 1
    1 0 0
output:                 output:
    2                       1 */

#include<stdio.h>
int main(){
    int n,i,a,b,c,solved=0;

    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d %d %d", &a, &b, &c);      // 3 jon tai ebhabe niyechi

        if(a+b+c>=2){
            solved++;
        }
    }
    printf("%d\n",solved);
    return 0;
}