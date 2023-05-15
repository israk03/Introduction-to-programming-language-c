#include<stdio.h>
#include<math.h>
float f(int x, int y);  // prototype
int absolute(int x);    // prototype

int main()
{
    int x = 12;
    int y = 7;

    float ans = f(x,y);
    printf("The answer is %f\n.", ans);
    return 0;
}

float f(int x, int y)
{
    int tempans = absolute(x-3) + pow(y+4, 2);      // pow = built in function
    return sqrt(tempans);           // sqrt = built in function
}
int absolute(int x)
{
    if(x>=0)
        return x;
    else
        return (-1)*x;
}