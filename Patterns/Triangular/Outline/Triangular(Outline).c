#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, e, f, g, i, j;
    char c;

    for(i=0;;i++)
    {
    printf("Choose a Character to print.\n");
    scanf(" %c", &c);
    printf("What should be the size of the Pattern.\n");
    scanf("%d", &n);
    printf("Which Outline Triangular Pattern do you want to print \?\n1 = Erect\n2 = Inverted\n");
    scanf("%d", &e);

    switch(e)
    {
        case 1:
            printf("Which Erect Outline Triangular Pattern do you want to print \?\n1 = Left\n2 = Right\n");
            scanf("%d", &f);
            printf("\n");
            switch(f)
            {
                case 1:
                    printf("%c \n", c);
                    for(i=2;i<=(n-1);i++)
                    {
                        printf("%c ", c);
                        for(j=2;j<i;j++)
                        {
                            printf("  ", c);
                            if(j>=i)
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
                break;

                case 2:
                    for(i=1;i<n;i++)
                    {
                        printf("  ");
                        if(i>=n)
                        {break;}
                    }
                    printf("%c \n", c);
                    for(i=2;i<=(n-1);i++)
                    {
                        for(j=(n-1);j>=i;j--)
                        {
                            printf("  ");
                            if(j<i)
                            {break;}
                        }
                        printf("%c ", c);
                        for(j=2;j<i;j++)
                        {
                            printf("  ");
                            if(j>=i)
                            {break;}
                        }
                        printf("%c ", c);
                        printf("\n");
                        if(i>(n-1))
                        {break;}
                    }
                    for(i=1;i<=n;i++)
                    {
                        printf("%c ", c);
                        if(i>n)
                        {break;}
                    }
                    printf("\n\n");
                break;
            }
        break;

        case 2:
            printf("Which Inverted Outline Triangular Pattern do you want to print \?\n1 = Left\n2 = Right\n");
            scanf("%d", &g);
            printf("\n");
            switch(g)
            {
                case 1:
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
                        for(j=(n-1);j>i;j--)
                        {
                            printf("  ", c);
                            if(j<=i)
                            {break;}
                        }
                        printf("%c ", c);
                        printf("\n");
                        if(i>(n-1))
                        {break;}
                    }

                    printf("%c \n", c);
                    printf("\n");
                break;

                case 2:
                    for(i=1;i<=n;i++)
                    {
                        printf("%c ", c);
                        if(i>n)
                        {break;}
                    }
                    printf("\n");
                    for(i=2;i<=(n-1);i++)
                    {
                        for(j=2;j<=i;j++)
                        {
                            printf("  ");
                            if(j>i)
                            {break;}
                        }
                        printf("%c ", c);
                        for(j=(n-2);j>=i;j--)
                        {
                            printf("  ");
                            if(j<i)
                            {break;}
                        }
                        
                        printf("%c ", c);
                        printf("\n");
                        if(i>(n-1))
                        {break;}
                    }
                    for(i=1;i<n;i++)
                    {
                        printf("  ");
                        if(i>=n)
                        {break;}
                    }
                    printf("%c \n", c);
                    printf("\n");
                break;
            }
        break;
    }
    }

    
    



system("PAUSE");
return 0;
}