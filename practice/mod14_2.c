// bubble sort:

#include<stdio.h>
int main()
{
    int n=8, i, j, temp;
    int ara[8]={12, 87, 67, 89,1,2,4,5};
    
    for(i=0; i<n; i++)
    {
        printf("%d ",ara[i]);
    }
    printf("\n");

    for(j=0; j<n; j++)
    {
        for(i=0; i<n; i++)
        {
            if(ara[i]>ara[i+1])
            {
                temp = ara[i];
                ara[i] = ara[i+1];
                ara[i+1] = temp;
            }
        }
    }

    for(i=0; i<n; i++)
    {
        printf("%d ",ara[i]);
    }
    printf("\n");
    return 0;
}