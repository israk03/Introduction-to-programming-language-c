/* You are given a string S of small letters, now check whether the given string is palindrome or not.
If the string is palindrome print YES otherwise print NO.
Note - A palindrome is a string that reads the same backward as forward
Sample Input 1:              Sample Output 1:
 aabbaa                       YES
Sample Input 2:              Sample Output 2:
 abcd                         NO

 */

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    gets(a);

    b[100] = strrev(a);

    int d = strcmp(a,b);

    if(d==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0; 
}