/* 'localization' will be spelt as 'l10n' and 'internationalization' will be spelt as 'i18n' */

#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    fgets(name,sizeof(name),stdin);

    int l = strlen(name)-1;

    if(l>10)
    {
        printf("%c%d%c", name[0],(l-2),name[l-1]);
    }
    else
    {
        printf("%s",name);
    }
    return 0;
}