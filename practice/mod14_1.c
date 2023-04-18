// selection sort: 

#include<stdio.h>
int main()
{
    int ara[5] = {6,5,4,3,1};
    int n=5, i, j;
    int sorted_ara[5];

    for(i=0; i<n; i++)
    {
        printf("%d ",ara[i]);
    }
    printf("\n");

    /* int min, min_position; */

    for(j=0; j<n; j++)
    {
        
        int min = ara[0];
        int min_position = 0;

        for(i=0; i<n; i++)
        {
            if(ara[i]<min)
            {
                min = ara[i];
                min_position = i;
            }
        }
        sorted_ara[j] = min;
        ara[min_position] = 1000;

        

        for(i=0; i<n; i++)
        {
            printf("%d ",ara[i]);
        }
        printf("\n");
    }

    for(i=0; i<n; i++)
    {
        printf("%d ", sorted_ara[i]);
    }
    printf("\n");
    return 0;
}