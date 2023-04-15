// display string character wise

#include<stdio.h>
#include<string.h>
int main()
{
    char n1[] = "ISRAK";

    int i = 0;
    while(n1[i] != 0)
    {
        printf("%c\n",n1[i]);
        i++;
    }
}