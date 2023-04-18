/* Petya started to attend programming lessons. On the first lesson his task was to write a simple program.
The program was supposed to do the following: in the given string, consisting if uppercase and lowercase
Latin letters, it:

* deletes all the vowels,
* inserts a character "." before each consonant,
* replaces all uppercase consonants with corresponding lowercase ones.

Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants.
The program's input is exactly one string, it should return the output as a single string,
resulting after the program's processing the initial string.

input:
Codeforces
output:
.c.d.f.r.c.s */

#include<stdio.h>
#include<string.h>
int main()
{
    char a[102];
    fgets(a,sizeof(a),stdin);

    int i;
    strlwr(a);
    int len = strlen(a);
    for(i=0; i<len-1; i++)
    {
        if(!(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'))
        {
            printf(".%c",a[i]);
        }
    }
    return 0;
}