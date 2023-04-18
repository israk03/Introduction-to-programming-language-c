/* You've got a 5 × 5 matrix, consisting of 24 zeroes and a single number one.
Let's index the matrix rows by numbers from 1 to 5 from top to bottom,
let's index the matrix columns by numbers from 1 to 5 from left to right.
In one move, you are allowed to apply one of the two following transformations to the matrix:

1)Swap two neighboring matrix rows, that is, rows with indexes i and i+1 for some integer i (1 ≤ i < 5).
2)Swap two neighboring matrix columns, that is, columns with indexes j and j+1 for some integer j (1 ≤ j < 5). 

You think that a matrix looks beautiful, if the single number one of the matrix is
located in its middle (in the cell that is on the intersection of the third row and the third column).
Count the minimum number of moves needed to make the matrix beautiful.

input:
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
output:
3
*/

#include<stdio.h>
int main()
{
    int i,j,x,y;
    int ara[5][5];

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&ara[i][j]);

            if(ara[i][j]==1)
            {
                x = i;
                y = j;
            }
        }
    }

    int ans, row_change, col_change;

    if(x>2)
    {
        row_change = (x-2);
    }
    else
    {
        row_change = (2-x);
    }
    
    if(y>2)
    {
        col_change = (y-2);
    }
    else
    {
        col_change = (2-y);
    }

    ans = row_change + col_change;

    printf("%d\n",ans);

    return 0;
}