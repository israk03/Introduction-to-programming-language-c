// compare 2 string

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "Real Madrid";
    char str2[] = "Royal Madrid"; 

    int d = strcmp(str1,str2);         // string 2 ta same hole 0 return asbe

    if(d==0)
    {
        printf("String are equal.");
    } 
    else
    {
        printf("String are not equal.");
    }
}