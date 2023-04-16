// 2D matrix addition:

#include<stdio.h>
int main()
{
    int i, j, nr, nc;
    int A[10][10], B[10][10];
    int Add[10][10];

    printf("Enter the num of rows and columns: ");
    scanf("%d %d", &nr, &nc);

    // scanning A matrix
    printf("Enter elements of A matrix: \n");
    for(i=0; i<nr; i++)                         
    {
        for(j=0; j<nc; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    // scanning B matrix
    printf("\n \n Enter elements of B matrix: \n");
    for(i=0; i<nr; i++)                         
    {
        for(j=0; j<nc; j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    // printing A matrix
    printf("A = ");
    for(i=0; i<nr; i++)
    {
        printf("\t");
        for(j=0; j<nc; j++)
        {
            printf("%d",A[i][j]);
        }
        printf("\n");
    }

    // printing B matrix
    printf("B = ");
    for(i=0; i<nr; i++)
    {
        printf("\t");
        for(j=0; j<nc; j++)
        {
            printf("%d",B[i][j]);
        }
        printf("\n");
    }

    // Adding these matrix
    for(i=0; i<nr; i++)
    {
        for(j=0; j<nc; j++)
        {
            Add[i][j] = A[i][j] + B[i][j];
        }
    }

    // printing the addition matrix
    printf("A + B = ");
    for(i=0; i<nr; i++)
    {
        for(j=0; j<nc; j++)
        {
            printf("%d",Add[i][j]);
        }
        printf("\n");
        printf("\t");
    }

    return 0;
}