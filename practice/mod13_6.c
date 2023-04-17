/* You are given a matrix of size NxM where N is the row number and M is the column number.
Now first line of the input will contain the value of N and M , and the next line will
contain the matrix, Now print the transpose version of this matrix.

Sample Input: 
    3 3

    1 2 3 
    4 5 6 
    7 8 9

Sample Output:
    1 4 7
    2 5 8
    3 6 9

 */

#include<stdio.h>
int main()
{
    int n,m,i,j;
    int a[100][100];
    int transpose[100][100];

    scanf("%d %d",&n,&m);

    for(i=0; i<n; i++)                  // scanning a matrix
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<n; i++)                  // transposing a matrix
    {
        for(j=0; j<m; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    for(i=0; i<m; i++)                  // printing transposed matrix
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;

}