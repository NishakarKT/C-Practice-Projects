#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
    int i, l;
    char setpass[100], entpass[100];

    for (i = 0;; i++)
    {
        printf("Set Password : ");
        scanf(" %[^\n]%*c", &setpass);
        printf("Set limit to Incorrect Attempts : ");
        scanf("%d", &l);

        for (i = 1;; i++)
        {
            printf("Enter Password : ");
            scanf(" %[^\n]%*c", &entpass);

            if (strcmp(setpass, entpass) == 0)
            {
                printf("Access Granted.\n");
                break;
            }
            if (strcmp(setpass, entpass) != 0)
            {
                printf("Access Denied.\nIncorrect Attempts : %d\n", i);
                if(i==l)
                {
                    printf("You exceeded the limit to Incorrect Attempts.\nTry again after sometime.\n");
                    system("PAUSE");
                    exit(0);
                }
            }
        }
        printf("WELCOME!\n");
        system("PAUSE");
    }
    return 0;
}