
#include<stdio.h>
int main()
{
    int first[10][10], second[10][10], mul[10][10];
    int r1,r2,c1,c2,i,j,k,sum=0;

    printf("Enter row and column for 1st matrix: ");
    scanf("%d %d",&r1, &c1);
    printf("Enter row and column for 2nd matrix: ");
    scanf("%d %d",&r2, &c2);

    while(c1!=r2)
    {
        printf("Error!");

        printf("Enter row and column for 1st matrix: ");
        scanf("%d %d",&r1, &c1);
        printf("Enter row and column for 2nd matrix: ");
        scanf("%d %d",&r2, &c2);
    }

    printf("Enter elements of first matrix: \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("first[%d][%d] = ",i,j);
            scanf("%d", &first[i][j]);
        }
        printf("\n");
    }

    printf("\n\nEnter elements of second matrix: \n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("second[%d][%d] = ",i,j);
            scanf("%d", &second[i][j]);
        }
        printf("\n");
    }

    // printing first matrix
    printf("first matrix = ");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
        {
            printf("%d",first[i][j]);
        }
        printf("\n");
    }

    // printing second matrix
    printf("second matrix = ");
    for(i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d",second[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<r1; i++)
    {
        for(j=0; j=c2; j++)
        {
            sum = sum + first[i][k] * second[k][j];
        }
        mul[i][j] = sum;
        sum = 0;
    }

    printf("\n \n Multiplide matrix = \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d",mul[i][j]);
            printf("\n");
        }
    }
    return 0;

}