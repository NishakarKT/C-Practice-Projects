#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, e, f, g, i, j, k, p, q, r, s, t, l, m, b, Q;
    char c;

    printf("The Password is '12345'.\n\n");
    for (i = 1; i <= 5; i++)
    {
        printf("Enter Password.\n");
        scanf("%d", &Q);
        printf("\n");
        if (Q == 12345)
        {
            printf("Access Granted.\n");
            goto label;
        }
        else if (Q != 12345)
        {
            printf("Access Denied.\nIncorrect Attempts : %d\n\n", i);
        }
        if(i>5)
        {break;}
    }
    printf("Sorry!\nYou exceeded the limit to Incorrect Attempts.\n");
    system("PAUSE");
    exit(0);
label:
    printf("Welcome.\n\n");
    

    for (i = 0;; i++)
    {
        printf("Enter a Character you want to print with.\n");
        scanf(" %c", &c);
        printf("Choose a Pattern.\n1  =  SQUARE\n2  =  RECTANGLE\n3  =  TRIANGLE\n4  =  DIAMOND\n5  =  ZIGZAG\n");
        scanf("%d", &p);

        if (p == 1)
        {
            printf("Choose a SQUARE Pattern type.\n1 = SHADED\n2 = OUTLINE\n");
            scanf("%d", &q);
            printf("What should be the size of the Pattern \?\n");
            scanf("%d", &n);
            printf("\n");

            if (q == 1)

            {
                for (i = 1; i <= n; i++)
                {
                    for (j = 1; j <= n; j++)
                    {
                        printf("%c ", c);
                        if (j > n)
                        {
                            break;
                        }
                    }

                    printf("\n");
                    if (i > n)
                    {
                        break;
                    }
                }
                printf("\n");
            }

            else if (q == 2)

            {
                for (j = 1; j <= n; j++)
                {
                    printf("%c ", c);
                    if (j > n)
                    {
                        break;
                    }
                }
                printf("\n");

                for (i = 2; i <= (n - 1); i++)
                {
                    printf("%c ", c);
                    for (j = 2; j <= (n - 1); j++)
                    {
                        printf("  ");
                        if (j > (n - 1))
                        {
                            break;
                        }
                    }
                    printf("%c ", c);

                    printf("\n");
                    if (i > (n - 1))
                    {
                        break;
                    }
                }

                for (j = 1; j <= n; j++)
                {
                    printf("%c ", c);
                    if (j > n)
                    {
                        break;
                    }
                }
                printf("\n\n");
            }
        }

        else if (p == 2)
        {
            printf("Which Rectangle type do you want \?\n1 = Shaded\n2 = Outline\n");
            scanf("%d", &t);
            printf("Enter the Length of the Rectangle.\n");
            scanf("%d", &l);
            printf("Enter the Breadth of the Rectangle.\n");
            scanf("%d", &b);
            printf("\n");

            switch (t)
            {
            case 1:
                for (i = 1; i <= b; i++)
                {
                    for (j = 1; j <= l; j++)
                    {
                        printf("%c ", c);
                        if (j > l)
                        {
                            break;
                        }
                    }
                    printf("\n");
                    if (i > b)
                    {
                        break;
                    }
                }
                printf("\n");
                break;

            case 2:
                for (j = 1; j <= l; j++)
                {
                    printf("%c ", c);
                    if (j > l)
                    {
                        break;
                    }
                }
                printf("\n");
                for (i = 2; i <= (b - 1); i++)
                {
                    printf("%c ", c);
                    for (j = 2; j <= (l - 1); j++)
                    {
                        printf("  ");
                        if (j > (l - 1))
                        {
                            break;
                        }
                    }
                    printf("%c ", c);
                    printf("\n");
                    if (i > (b - 1))
                    {
                        break;
                    }
                }
                for (j = 1; j <= l; j++)
                {
                    printf("%c ", c);
                    if (j > l)
                    {
                        break;
                    }
                }
                printf("\n\n");
                break;
            }
        }

        else if (p == 3)

        {
            printf("Choose a TRIANGULAR Pattern type.\n1 = SHADED\n2 = OUTLINE\n");
            scanf("%d", &q);
            
            if (q == 1)
            {
                printf("Choose a SHADED TRIANGULAR Pattern type.\n1 = ERECT\n2 = INVERTED\n");
                scanf("%d", &r);

                if (r == 1)
                {
                    printf("Choose a SHADED ERECT TRIANGULAR Pattern type.\n1 = LEFT\n2 = RIGHT\n");
                    scanf("%d", &s);
                    printf("What should be the size of the Pattern \?\n");
                    scanf("%d", &n);
                    printf("\n");

                    if (s == 1)
                    {
                        for (i = 1; i <= n; i++)
                        {
                            for (j = 0; j < i; j++)
                            {
                                printf("%c ", c);
                                if (j >= i)
                                {
                                    break;
                                }
                            }
                            printf("\n");
                            if (i > n)
                            {
                                break;
                            }
                        }
                        printf("\n");
                    }

                    else if (s == 2)

                    {
                        for (i = 1; i <= n; i++)
                        {
                            for (j = n; j > i; j--)
                            {
                                printf("  ");
                                if (j <= i)
                                {
                                    break;
                                }
                            }

                            for (j = 1; j <= i; j++)
                            {
                                printf("%c ", c);
                                if (j > i)
                                {
                                    break;
                                }
                            }
                            printf("\n");
                            if (i > n)
                            {
                                break;
                            }
                        }
                        printf("\n");
                    }
                }

                else if (r == 2)
                {
                    printf("Choose a SHADED INVERTED TRIANGULAR Pattern type.\n1 = LEFT\n2 = RIGHT\n");
                    scanf("%d", &s);
                    printf("What should be the size of the Pattern \?\n");
                    scanf("%d", &n);
                    printf("\n");

                    if (s == 1)
                    {
                        for (i = 1; i <= n; i++)
                        {
                            for (j = n; j >= i; j--)
                            {
                                printf("%c ", c);
                                if (j < i)
                                {
                                    break;
                                }
                            }
                            printf("\n");
                            if (i > n)
                            {
                                break;
                            }
                        }
                        printf("\n");
                    }

                    else if (s == 2)
                    {
                        for (i = 1; i <= n; i++)
                        {
                            for (j = 1; j < i; j++)
                            {
                                printf("  ");
                                if (j >= i)
                                {
                                    break;
                                }
                            }
                            for (j = n; j >= i; j--)
                            {
                                printf("%c ", c);
                                if (j < i)
                                {
                                    break;
                                }
                            }
                            printf("\n");
                            if (i > n)
                            {
                                break;
                            }
                        }
                        printf("\n");
                    }
                }
            }

            else if (q == 2)
            {
                printf("Choose an OUTLINE TRIANGULAR Pattern type.\n1 = ERECT\n2 = INVERTED\n");
                scanf("%d", &r);

                if (r == 1)
                {
                    printf("Choose an OUTLINE ERECT TRIANGULAR Pattern type.\n1 = LEFT\n2 = RIGHT\n");
                    scanf("%d", &s);
                    printf("What should be the size of the Pattern \?\n");
                    scanf("%d", &n);
                    printf("\n");

                    if (s == 1)

                    {
                        printf("%c \n", c);
                        for (i = 2; i <= (n - 1); i++)
                        {
                            printf("%c ", c);
                            for (j = 2; j < i; j++)
                            {
                                printf("  ", c);
                                if (j >= i)
                                {
                                    break;
                                }
                            }
                            printf("%c ", c);
                            printf("\n");
                            if (i > (n - 1))
                            {
                                break;
                            }
                        }
                        for (j = 1; j <= n; j++)
                        {
                            printf("%c ", c);
                            if (j > n)
                            {
                                break;
                            }
                        }
                        printf("\n\n");
                    }

                    else if (s == 2)

                    {
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
                    }
                }

                else if (r == 2)
                {
                    printf("Choose an OUTLINE INVERTED TRIANGULAR Pattern type.\n1 = LEFT\n2 = RIGHT\n");
                    scanf("%d", &s);
                    printf("What should be the size of the Pattern \?\n");
                    scanf("%d", &n);
                    printf("\n");

                    if (s == 1)
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
                    }

                    else if (s == 2)
                    {
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
                    }
                }
            }
        }

        else if (p == 4)

        {
            printf("What should be the size of the Diamond Pattern \?\n");
            scanf("%d", &n);
            printf("\n");

            for (i = 1; i <= n; i = (i + 2))
            {
                for (j = n; j > i; j = (j - 2))
                {
                    printf("  ");
                    if (j <= i)
                    {
                        break;
                    }
                }
                for (j = 1; j <= i; j++)
                {
                    printf("%c ", c);
                    if (j > i)
                    {
                        break;
                    }
                }
                for (j = n; j > i; j = (j - 2))
                {
                    printf("  ");
                    if (j <= i)
                    {
                        break;
                    }
                }
                printf("\n");
                if (i > n)
                {
                    break;
                }
            }

            for (i = 1; i < n; i = (i + 2))
            {
                for (j = 1; j <= i; j = (j + 2))
                {
                    printf("  ");
                    if (j > i)
                    {
                        break;
                    }
                }
                for (j = 1; j <= (n - 1 - i); j++)
                {
                    printf("%c ", c);
                    if (j > (n - 1 - i))
                    {
                        break;
                    }
                }
                for (j = 1; j <= i; j = (j + 2))
                {
                    printf("  ");
                    if (j <= i)
                    {
                        break;
                    }
                }
                printf("\n");
                if (i >= n)
                {
                    break;
                }
            }
            printf("\n");
        }

        else if (p == 5)
        {
            printf("What should be the size of the ZigZag Pattern \?\n");
            scanf("%d", &n);
            printf("How many loops do you want \?\n0 = Infinite Pattern\n");
            scanf("%d", &p);
            printf("\n");

            if (p == 0)
            {
                for (k = 1;; k++)
                {
                    for (i = 1; i <= n; i++)
                    {
                        for (j = 1; j < i; j++)
                        {
                            printf("  ");
                            if (j >= i)
                            {
                                break;
                            }
                        }
                        printf("%c ", c);
                        printf("\n");
                        if (i > n)
                        {
                            break;
                        }
                    }
                    for (i = 1; i < (n - 1); i++)
                    {
                        for (j = i; j <= (n - 2); j++)
                        {
                            printf("  ");
                            if (j > (n - 2))
                            {
                                break;
                            }
                        }
                        printf("%c ", c);
                        printf("\n");
                        if (i >= (n - 1))
                        {
                            break;
                        }
                    }
                }
            }
            else
            {
                for (k = 1; k <= p; k++)
                {
                    for (i = 1; i <= n; i++)
                    {
                        for (j = 1; j < i; j++)
                        {
                            printf("  ");
                            if (j >= i)
                            {
                                break;
                            }
                        }
                        printf("%c ", c);
                        printf("\n");
                        if (i > n)
                        {
                            break;
                        }
                    }
                    for (i = 1; i < (n - 1); i++)
                    {
                        for (j = i; j <= (n - 2); j++)
                        {
                            printf("  ");
                            if (j > (n - 2))
                            {
                                break;
                            }
                        }
                        printf("%c ", c);
                        printf("\n");
                        if (i >= (n - 1))
                        {
                            break;
                        }
                    }
                    if (k > p)
                    {
                        break;
                    }
                }
                printf("%c \n", c);
                printf("\n");
            }
        }
    }

    system("PAUSE");

    return 0;
}