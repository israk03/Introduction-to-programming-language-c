#include<stdio.h>
int max(x,y,z);     // prototype
int main()
{
    int a,b,c,i,m;
    printf("Enter three number : ");
    for(i=0; i<5; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        m = max(a,b,c);
        printf("The max number is %d",m);

    }
    return 0;

}
int max(int x, int y, int z)
{
    if(x>y && x>z)
        return x;
    else if(y>x && y>z)
        return y;
    else
        return z;
}