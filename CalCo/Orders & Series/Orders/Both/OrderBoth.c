#include <stdio.h>

int main()
{
    int n, t, i, j;
    double a, numbers[1000];

    label:
    printf("How would you like to arrange the Numbers \?\n1 = Ascending Order\n2 = Descending Order\n");
    scanf("%d", &t);
    printf("How many Numbers do you want to compare \? (Max : 1000)\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter Number %d (Max Decimals : 4) : \n", (i + 1));
        scanf("%lf", &numbers[i]);
    }
    printf("\n");

    switch (t)
    {
    case 1:
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
        printf("The Ascending Order is : \n");
        for (i = 0; i < n; i++)
        {
            printf("%0.4lf \n", numbers[i]);
        }
        break;

    case 2:
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
        printf("The Descending Order is : \n");
        for (i = (n-1); i >= 0 ; i--)
        {
            printf("%0.4lf \n", numbers[i]);
        }
        break;
    }
    printf("\n\n");
    goto label;

    return 0;
}