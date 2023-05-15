/* 
        237863 = ISRAK's secret number
            1) "7" must be present 
            2) digits summation more than 10
            3) last digit must be prime
 */

#include<stdio.h>

int sev_present(int n);
int digsum(int n);
int ld_prime(int n);      // ld = last digit

int main()
{
    int a; 
    printf("Enter Israk's secret num: ");
    scanf("%d", &a);

    if(sev_present(a)==1 && digsum(a)>10 && ld_prime(a)==1)
        printf("Yes it's ISRAK's secret number.");
    else
        printf("No it's not ISRAK's secret number.");

    return 0;
}

int sev_present(int n)
{
    while(n>0)
    {
        if(n%10==7)
            return 1;
            n /= 10;
    }
    return 0;
}
int digsum(int n)
{
    int sum = 0;
    while(n>0)
    {
        sum += (n%10);
        n /= 10;
    }
}
int ld_prime(int n)
{
    int ld = (n%10);
    if(ld==2 || ld==3 || ld==5 || ld==7)
        return 1;
    else
        return 0;
}