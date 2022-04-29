#include<stdio.h>

int prime( int i)
{
    int j;

    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {return 1;break;}
        if(j>=i)
        {break;}
    }
}
int main()
{
    
    int i, j, n;

    label:

    printf("Enter the number till which you want to list out Primes.\n");
    scanf("%d", &n);

    for(i=2;i<=n;i++)
    {
        if(prime(i) != 1)
        {
            printf("%d ", i);
        }
        if(i>n)
        {break;}
    }
    printf("\n\n");
    goto label;
    
    return 0 ;
}