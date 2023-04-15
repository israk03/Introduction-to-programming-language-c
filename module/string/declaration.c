#include<stdio.h>
#include<string.h>
int main()
{
    char name[6];       // 1 ta size beshi neya lagbe

    name[0] = 'i';
    name[1] = 's';
    name[2] = 'r';
    name[3] = 'a';
    name[4] = 'k';
    name[5] = '\0';      // \0 hocche null character

    printf("Name = %s",name);       // %s use korte hobe

   
}