/* You are given two matrix of size NxM where N is the row number and M is the column number.
Now first line of the input will contain the value of N and M , and the next two line will
contain the two matrix, Now perform matrix addition operation.

Sample Input: 
    2 3 

    1 2 3
    4 5 6

    7 8 9
    10 11 12

Sample Output:
    8 10 12
    14 16 18
 */
#include<stdio.h>
#include<string.h>
int main()
{
    int a[50][50], b[50][50];
    int n,m,i,j;
    int add[50][50];

    scanf("%d %d",&n, &m);

    for(i=0; i<n; i++)          // scanning a matrix
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<n; i++)          // scanning b matrix
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<n; i++)          // adding two matrix
    {
        for(j=0; j<m; j++)
        {
            add[i][j] = a[i][j] + b[i][j];
        }
    }

    for(i=0; i<n; i++)          // printing the add matrix
    {
        for(j=0; j<m; j++)
        {
            printf("%d ",add[i][j]);
        }
        printf("\n");
    }
    return 0;
}