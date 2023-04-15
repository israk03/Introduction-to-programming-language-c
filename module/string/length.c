/* finding string length:
                        1) using function 
                        2) without function */


//using function:

#include<stdio.h>
#include<string.h>
int main()
{
    char n[100];
    printf("enter sen: ");
    gets(n);

    int len = strlen(n);        // strlen = library function

    printf("Length = %d",len);
}


/*
without function:

#include<stdio.h>
#include<string.h>
int main()
{
    char m[] = "Real Madrid";

    int i=0, len=0;
    while(m[i] != '\0')
    {
        i++;
        len++;
    }
    printf("Length = %d",len);
}
*/