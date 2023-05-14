#include<stdio.h>

int max(int a[])
{
    int i;
    int maxx = a[0];
    for(i=1; i<5; i++)
    {
        if(maxx < a[i])
            maxx = a[i];
    }
    return maxx;
}

int main()
{
    int ara[] = {4,4,3,2,5};
    int max_value = max(ara);

    printf("the maximum value is %d.", max_value);

    return 0; 
}