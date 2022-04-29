#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, p, i, j;
    char c;

for(i=0;;i++)
{
    printf("Enter a Character you want to print with.\n");
    scanf(" %c", &c);
    printf("Choose a Square Pattern type.\n1 = Shaded\n2 = Outline\n");
    scanf("%d", &p);

    switch(p)
    {
        case 1:
            printf("What should be the size of the Pattern \?\n");
            scanf("%d", &n);
            printf("\n");
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=n;j++)
                {
                    printf("%c ", c);
                    if(j>n)
                    {break;}
                }
                printf("\n");
                if (i>n)
                {break;}
            }
            printf("\n\n");
        break;

        case 2:
            printf("What should be the size of the Pattern \?\n");
            scanf("%d", &n);
            printf("\n");
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=n;j++)
                {
                    printf("%c ", c);
                    if(j>n)
                    {break;}
                }
                printf("\n");
                for(i=2;i<=(n-1);i++)
                {
                    printf("%c ", c);
                    for(j=2;j<=(n-1);j++)
                    {
                        printf("  ");
                        if(j>(n-1))
                        {break;}
                    }
                    printf("%c ", c);
                    printf("\n");
                    if(i>(n-1))
                    {break;}
                }
                for(j=1;j<=n;j++)
                {
                    printf("%c ", c);
                    if(j>n)
                    {break;}
                }
                printf("\n\n");
                if (i>n)
                {break;}
            }
        break;
    }
}

system("PAUSE");
return 0 ;
}