#include <stdio.h>

int main()
{
    int i, j, n;
    double a, numbers[1000];

    label:
    printf("How many Numbers do you want to compare \? (Max : 1000)\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter Number %d (Max Decimals : 4) : ", (i + 1));
        scanf("%lf", &numbers[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = (i + 1); j < n; j++)
        {
            if (numbers[i] > numbers[j])
            {
                a = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = a;
            }
        }
    }

    printf("\nThe Ascending Order : \n");
    for (i = 0; i < n; i++)
    {
        printf("%0.4lf \n", numbers[i]);
    }
    printf("\n");
    goto label;

    return 0;
}