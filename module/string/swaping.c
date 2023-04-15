#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10] = "Bangla";
    char s2[10] = "English";
    char temp[10];

    printf("S1 = %s\n",s1);
    printf("S2 = %s\n",s2);


    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);

    printf("S1 = %s\n",s1);
    printf("S2 = %s\n",s2);
}