#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, p, i, j, k;
    char c;

    for (i = 0;; i++)
    {
        printf("Choose a Character to print with.\n");
        scanf(" %c", &c);
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
    system("PAUSE");
    return 0;
}