#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e, i, p, z;
    printf("Hackbot : Hello! I'm HackBot.\n\n");
    for (i = 0;; i++)
    {
    start:
        printf("Enter Password (Less Than 2147483647) : ");
        scanf("%d", &p);

        start4:
        printf("\nHackBot : Where to start the search \?\n");
        scanf("%d", &e);
        
        printf("\nHackBot : How may I proceed \?\n");
    start1:
        printf("\n1 = Show Incorrect Attempts\n2 = Don't show Incorrect Attempts\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:

            printf("\nHackBot : Ok, so I shall show you my Incorrect Attempts,\nbut let me remind you, it will take much longer time to decode.\n\n");
        start2:
            printf("1 = Continue\n2 = Switch\n");
            scanf("%d", &d);

            if (d != 1 && d != 2)
            {
                printf("\nHackBot : Bruh...Check the Options again.\n");
                goto start2;
            }
            else if (d == 2)
            {
                goto start1;
            }
            else if (d == 1)
            {
                printf("Let's Go!\n");
                system("PAUSE");
                for (i = e;; i++)
                {
                    if (i == p)
                    {
                        printf("%d = Correct\nPassword : %d\n", i, i);
                        goto start3;
                        break;
                    }
                    printf("%d = Incorrect\n", i);
                }
                printf("\nNo Matches.\nReset your starting value\n");
                goto start4;
            }
            break;

        case 2:
            printf("\nHackBot : Ok, so I won't show you my Incorrect Attempts.\nLet's Go!\n");
            system("PAUSE");
            printf("\nLOADING...\n\n");
            for (i = e;; i++)
            {
                if (i == p)
                {
                    printf("Password : %d\n", i, i);
                    goto start3;
                    break;
                }
            }
            printf("\nNo Matches.\nReset your starting value\n");
            goto start4;
            break;

        default:
            printf("\nHackBot : Bruh...Check the Options again.\n");
            goto start1;
        }

    start3:
        printf("\nHackBot : Once again I cracked it!\nWhat's next \?\n\n1 = Reuse\n2 = Exit\n");
        scanf("%d", &z);
        switch (z)
        {
        case 1:
            printf("\n\n");
            break;

        case 2:
            printf("Thanks for using HackBot.\n");
            system("PAUSE");
            exit(0);
            break;

        default:
            printf("\nHackBot : Bruh...Check the Options again.\n");
            goto start3;
        }
    }
    return 0;
}