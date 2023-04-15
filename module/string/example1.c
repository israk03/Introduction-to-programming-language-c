#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],ch;

    printf("Please enter a string: ");
    gets(s);

    int i,vowel,consonant,digit,word,other;
    i = vowel = consonant = digit = word = other = 0;
    

    while((ch=s[i]) != '\0')
    {
        

        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowel++;
        }

        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        {
            consonant++;
        }

        else if(ch>='0' && ch<='9')
        {
            digit++;
        }

        else if(ch== ' ')
        {
            word++;
        }

        else
        {
            other++;
        }

        i++;
    }
    word++;         // cz space er age ekta word thake

    printf("Vowels = %d\n",vowel);
    printf("Consonants = %d\n",consonant);
    printf("Digits = %d\n",digit);
    printf("Words = %d\n",word);
    printf("Others = %d\n",other);
    

    return 0;
}