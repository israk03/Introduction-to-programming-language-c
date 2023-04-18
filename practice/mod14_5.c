/* 
petya and string:
Input: Each of the first two lines contains a bought string.
The strings' lengths range from 1 to 100 inclusive. It is guaranteed
that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

Output:
If the first string is less than the second one, print "-1".
If the second string is less than the first one, print "1".
If the strings are equal, print "0".


input:
aaaa
aaaA
output:
0
input:
abs
Abz
output:
-1
input:
abcdefg
AbCdEfF
output:
1
N

 */

#include<stdio.h>
#include<string.h>
int main()
{
    char s[102], t[102];
    fgets(s,sizeof(s),stdin);
    fgets(t,sizeof(t),stdin);

    int i, len;

    len = strlen(s) - 1;

    strlwr(s);
    strlwr(t);

    for(i=0; i<len; i++)
    {
        if(s[i]>t[i])
        {
            printf("1\n");
            return 0;
        }
        else if(s[i]<t[i])
        {
            printf("-1\n");
            return 0;
        }
    }
    printf("0\n");
    return 0;
}