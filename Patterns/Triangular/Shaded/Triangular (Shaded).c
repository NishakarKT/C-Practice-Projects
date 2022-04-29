#include<stdio.h>
#include<stdlib.h>

int main()
{
    int p, n, i, j;
    char c;
    
    for(i=0;;i++)
    {
    printf("Enter a Character you want to print with.\n");
    scanf(" %c", &c);
    printf("Which pattern type do you want to print\?\n1 = Triangular Pattern (Left)\n2 = Triangular Pattern (Right)\n3 = Inverted Triangular Pattern (Left)\n4 = Inverted Triangular Pattern (Right)\n");
    scanf("%d", &p);
    printf("What should be the size of the pattern\?\n");
    scanf("%d", &n);
    printf("\n");

    switch(p)
    {
        case 1:
            for(i=1;i<=n;i++)
            {
                for(j=0;j<i;j++)
                {
                    printf("%c ", c);
                    if(j>=i)
                    {break;}
                }
                printf("\n");
                if(i>n)
                {break;}
            }
            printf("\n");
        break;

        case 2:
            for(i=1;i<=n;i++)
            {
                for(j=n;j>=i;j--)
                {
                    printf("  ");
                    if(j<i)
                    {break;}
                }
                for(j=0;j<i;j++)
                {
                    printf("%c ", c);
                    if(j>=i)
                    {break;}
                }
                printf("\n");
                if(i>n)
                {break;}
            }
            printf("\n");
        break;

        case 3:
            for(i=1;i<=n;i++)
            {
                for(j=n;j>=i;j--)
                {
                    printf("%c ", c);
                    if(j<i)
                    {break;}
                }
                printf("\n");
                if(i>n)
                {break;}
            }
            printf("\n");
        break;

        case 4:
            for(i=1;i<=n;i++)
            {
                for(j=1;j<i;j++)
                {
                    printf("  ");
                    if(j>=i)
                    {break;}
                }
                for(j=n;j>=i;j--)
                {
                    printf("%c ", c);
                    if(j<i)
                    {break;}
                }
                printf("\n");
                if(i>n)
                {break;}
            }
            printf("\n");
        break;
    }
    }
    
    system("PAUSE");
    return 0 ;
}