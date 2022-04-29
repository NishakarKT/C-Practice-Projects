#include<stdio.h>

int prime(int n)
{
    int i;

    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 1;
            break;
        }
    }
}

int main()
{
    int a , b, i;

    label:
    printf("Enter First Number (Smaller Number).\n");
    scanf("%d", &a);
    printf("Enter Second Number (Bigger Number).\n");
    scanf("%d", &b);
    printf("The Prime Numbers between %d and %d is :\n\n", a, b);

    for(i=a;i<b;i++)
    {
        if(prime(i)!=1)
        {
            printf("%d ", i);
        }
        if(i>=b)
        {break;}
    }
    printf("\n\n");
    goto label;
    return 0 ;
}