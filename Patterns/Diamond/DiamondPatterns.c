#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i, j;
    char c;

    for(i=0;;i++)
{
    printf("Enter a Character you want to print with.\n");
    scanf(" %c", &c);
    printf("What should be the size of the Diamond pattern \?\n");
    scanf("%d", &n);
    printf("\n");

    for(i=1;i<=n;i=(i+2)) //Odd
    {
        for(j=n;j>i;j=(j-2))
        {
            printf("  ");
            if(j<=i)
            {break;}
        }
        for(j=1;j<=i;j++)
        {
            printf("%c ", c);
            if(j>i)
            {break;}
        }
        for(j=n;j>i;j=(j-2))
        {
            printf("  ");
            if(j<=i)
            {break;}
        }
        printf("\n");
        if(i>n)
        {break;}
    }

    for(i=1;i<n;i=(i+2))
    {
        for(j=1;j<=i;j=(j+2))
        {
            printf("  ");
            if(j>i)
            {break;}
        }
        for(j=1;j<=(n-1-i);j++)
        {
            printf("%c ", c);
            if(j>(n-1-i))
            {break;}
        }
        for(j=1;j<=i;j=(j+2))
        {
            printf("  ");
            if(j<=i)
            {break;}
        }

        printf("\n");
        if(i>=n)
        {break;}
    }
    printf("\n");

}

system("PAUSE");
return 0 ;
}