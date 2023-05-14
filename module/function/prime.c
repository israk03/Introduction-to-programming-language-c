#include<stdio.h>

int is_prime(int p)
{
    int i;
    if(p==1)
        return 0;
    else if(p==2)
        return 1;
    else
    {
        for(i=2; i<p; i++)
        {
            if(p%i==0)
                return 0;
        }
        return 1;
    }
}
int main()
{
    int a; 
    printf("Enter a num: ");
    scanf("%d ", &a);

    int i = is_prime(a);

    if(i==1)
        printf("PRIME.\n");
    else
        printf("COMPOSITE.\n");

    return 0;
}