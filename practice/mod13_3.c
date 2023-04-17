/* You are given a string S of small letters ,
Now count the number of vowels and consonant from the given string.
Sample Input 1:         
    aeibcou 
Sample Output 1:
    Vowel – 5
    Consonant -2
     */

#include<stdio.h>
#include<string.h>
int main()
{
    char s[50],ch;
    gets(s);

    int i,v,c;
    i = v = c = 0;
    while((ch=s[i]) != '\0')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        {
            v++;
        }
        else
        {
            c++;
        }
        i++;
    }
    printf("Vowel - %d\n",v);
    printf("Consonant - %d\n",c);
    return 0;
}