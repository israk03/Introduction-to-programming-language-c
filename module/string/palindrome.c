// checking a string is palindrome or not: 
        /* palindrome = jodi ekta string k reverse korar por oi ekoi string
                     match kore, tahole seta palindrome. */

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30] = "MADAM";
    char str2[30];

    str2[30] = strrev(str1);

    int d = strcmp(str1,str2);

    if(d==0)
    {
        printf("they are palindrome");
    }
    else
    {
        printf("they are not palindrome");
    }
}