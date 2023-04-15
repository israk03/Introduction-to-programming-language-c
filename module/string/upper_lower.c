/* 
for CAPITAL LETTER = strupr
for small letter = strlwr
 */

#include<stdio.h>
#include<string.h>
int main()
{
    char s[89] = "isRaK ChowDHury";

    strupr(s);
    printf("%s\n",s);

    strlwr(s);
    printf("%s\n",s);
}