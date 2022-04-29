#include<stdio.h>

int main()
{
    int n, i;

    label:
    printf("Enter a Number.\n");
    scanf("%d", &n);
    printf("\n");
    
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("It's a Composite Number.\n\n");
            goto label;
        }
        if(i>=n)
        {break;}
    }
    printf("It's a Prime Number.\n\n");
    goto label;

    return 0 ;
}