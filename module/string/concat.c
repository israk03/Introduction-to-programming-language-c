/* ekta string er shese arekta string add:
                        1) with function
                        2) without function
 */

// with strcat function: 

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "My name is ";
    char str2[] = "Israk";

    strcat(str1,str2);      // str1 er sheshe str2 add hoiche,so full string at str1.

    printf("%s",str1);      // str1 er sathe add koray, str1 print hobe.
}

// without function: (have some output problem)
/* 
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "My name is ";
    char str2[] = "Israk";

    int i=0, len=0, j=0;
    while(str1[i] != '\0')      // first e length ber korbo
    {
        i++;
        len++;
    }

    while(str2[j] != '\0')         // then ei loop e str1 add korbo
    {
        str1[len+j] = str2[j];
        j++;
    }

    printf("result = %s",str1);

} */