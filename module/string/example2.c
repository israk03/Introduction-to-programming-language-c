#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],ch;

    printf("enter a string: ");
    gets(str);

    int i, capital, small, digit;
    i = capital = small = digit = 0;

    while((ch=str[i]) != 0)
    {
        if(ch>=65 && ch<=90)                // ascii code A=65 to Z=90
        {
            capital++;
        }
        else if(ch>= 97 && ch<= 122)        // ascii code a=97 to z=122
        {
            small++;
        }
        else if(ch>= 48 && ch<= 57)         // ascii code 0=48 to 9=57
        {
            digit++;
        }

        i++;
    }

    printf("No of capital letters = %d\n",capital);
    printf("No of small letters = %d\n",small);
    printf("No of digits = %d\n",digit);

    
}