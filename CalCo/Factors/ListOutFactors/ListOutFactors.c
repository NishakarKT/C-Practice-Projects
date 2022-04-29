#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;

    for (i = 1;; i++)
    {
        printf("Enter the number to list it's factors.\n");
        scanf("%d", &n);
        printf("\n");

        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                printf("%d ", i);
            }
            if (i > n)
            {
                break;
            }
        }
        printf("\n\n");
    }
    return 0;
}