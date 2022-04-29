#include <stdio.h>

int main()
{
    char user[1000], comp[1000];
    int i, j, r, win = 0, lose = 0, roc, pap, sic;

choose:
    comp[0] = 'r';
    comp[1] = 's';
    comp[2] = 'p';
    roc = 0;
    pap = 0;
    sic = 0;

    for (i = 2; i < 999; i++)
    {

        printf("Choose >>> r = Rock >> p = Paper >> s = Scissors : ");
        scanf(" %c", &user[i]);
        printf("User : %c    ", user[i]);

        if (user[i] != 'r' && user[i] != 'p' && user[i] != 's')
        {
            printf("\n\nINVALID INPUT ... \n\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            goto choose;
        }

        if (user[i] == 'p' && user[i - 1] == 's' && user[i-2] == 'r')
        {
            comp[i]='s';
            printf("Computer : %c\n", comp[i]);
            if (comp[i] == 'r' && user[i] == 'p')
            {
                win++;
                comp[i] = 's';
                printf("\nYou WIN !!!\n");
            }
            else if (comp[i] == 'r' && user[i] == 's')
            {
                lose++;
                printf("\nYou LOSE ... \n");
            }
            else if (comp[i] == 'p' && user[i] == 'r')
            {
                lose++;
                printf("\nYou LOSE ... \n");
            }
            else if (comp[i] == 'p' && user[i] == 's')
            {
                win++;
                comp[i] = 'r';
                printf("\nYou WIN !!!\n");
            }
            else if (comp[i] == 's' && user[i] == 'r')
            {
                win++;
                comp[i] = 'p';
                printf("\nYou WIN !!!\n");
            }
            else if (comp[i] == 's' && user[i] == 'p')
            {
                lose++;
                printf("\nYou LOSE ... \n");
            }
            else if (comp[i] == 's' && user[i] == 's')
            {
                comp[i] = 'r';
                printf("\nIt's a Tie ... \n");
            }
            else if (comp[i] == 'p' && user[i] == 'p')
            {
                comp[i] = 's';
                printf("\nIt's a Tie ... \n");
            }
            else if (comp[i] == 'r' && user[i] == 'r')
            {
                comp[i] = 'p';
                printf("\nIt's a Tie ... \n");
            }

            printf("\nSCORE  >>>  USER : %d  COMPUTER : %d\n\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n", win, lose);
        }

        else
        {
            comp[i] = comp[i - 1];
            printf("Computer : %c\n", comp[i]);

            if (comp[i] == 'r' && user[i] == 'p')
            {
                win++;
                comp[i] = 's';
                printf("\nYou WIN !!!\n");
            }
            else if (comp[i] == 'r' && user[i] == 's')
            {
                lose++;
                printf("\nYou LOSE ... \n");
            }
            else if (comp[i] == 'p' && user[i] == 'r')
            {
                lose++;
                printf("\nYou LOSE ... \n");
            }
            else if (comp[i] == 'p' && user[i] == 's')
            {
                win++;
                comp[i] = 'r';
                printf("\nYou WIN !!!\n");
            }
            else if (comp[i] == 's' && user[i] == 'r')
            {
                win++;
                comp[i] = 'p';
                printf("\nYou WIN !!!\n");
            }
            else if (comp[i] == 's' && user[i] == 'p')
            {
                lose++;
                printf("\nYou LOSE ... \n");
            }
            else if (comp[i] == 's' && user[i] == 's')
            {
                comp[i] = 'r';
                printf("\nIt's a Tie ... \n");
            }
            else if (comp[i] == 'p' && user[i] == 'p')
            {
                comp[i] = 's';
                printf("\nIt's a Tie ... \n");
            }
            else if (comp[i] == 'r' && user[i] == 'r')
            {
                comp[i] = 'p';
                printf("\nIt's a Tie ... \n");
            }

            printf("\nSCORE  >>>  USER : %d  COMPUTER : %d\n\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n", win, lose);
        }
    }

    return 0;
}