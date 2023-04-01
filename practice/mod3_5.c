/* #include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if (a+b>c){
        printf("YES");
    }
    else if (a+c>b){
        printf("YES");
    }
    else if (b+c>a){
        printf("YES");
    }
    else{
        printf("NO");
    }



    return 0;
} */

#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three non-negative integers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > 0 && b > 0 && c > 0) {  // check if all sides are greater than 0
        if (a + b > c && b + c > a && c + a > b) {  // check if the sum of any two sides is greater than the third side
            printf("Yes, the input forms a valid triangle.\n");
        } else {
            printf("No, the input does not form a valid triangle.\n");
        }
    } else {
        printf("All sides must be greater than 0.\n");
    }

    return 0;
}
