#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, p, o, z;
    for (i = 0;; i++)
    {
    start:
        printf("Enter Password (Numeric) : ");
        scanf("%d", &p);
        printf("Choose an Option.\n1 = Show Incorrect Attempts (Slower)\n2 = Don't show Incorrect Attempts\n");
        scanf("%d", &o);

        switch (o)
        {
        case 1:
            for (i = 0;; i++)
            {
                if (i == p)
                {
                    printf("%d = Correct\nPassword : %d\n", i, i);
                    system("PAUSE");
                    break;
                }
                printf("%d = Incorrect\n", i);
            }
            break;

        case 2:
            printf("\nLOADING...\n\n");
            for (i = 0;; i++)
            {
                if (i == p)
                {
                    printf("Password : %d\n", i, i);
                    system("PAUSE");
                    break;
                }
            }
            break;

        default:
            goto start;
        }
    start1:
        printf("1 = Reuse\n2 = Exit\n");
        scanf("%d", &z);
        switch (z)
        {
        case 1:
            break;

        case 2:
            exit(0);
            break;

        default:
            goto start1;
        }
    }
    return 0;
}