#include <stdio.h>
#include <stdlib.h>

int main()
{
    char user[1000], comp[1000];
    int i, r, win=0, lose=0;

    for (i = 0; i < 999; i++)
    {
    choose:

        printf("Choose >>> r = Rock >> p = Paper >> s = Scissors : ");
        scanf(" %c", &user[i]);
        printf("User : %c    ", user[i]);
        if(user[i]!='r'&&user[i]!='p'&&user[i]!='s')
        {
            printf("\n\nINVALID INPUT ... \n\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
            goto choose;
        }
        r = rand();

        if (r % 3 == 0)
        {
            comp[i] = 'r';
            printf("Computer : %c\n", comp[i]);
        }
        else if (r % 3 == 1 || r % 3 == (-1))
        {
            comp[i] = 'p';
            printf("Computer : %c\n", comp[i]);
        }
        else if (r % 3 == 2 || r % 3 == (-2))
        {
            comp[i] = 's';
            printf("Computer : %c\n", comp[i]);
        }

        if (comp[i] == 'r' && user[i] == 'p')
        {
            win++;
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
            printf("\nYou WIN !!!\n");
        }
        else if (comp[i] == 's' && user[i] == 'r')
        {
            win++;
            printf("\nYou WIN !!!\n");
        }
        else if (comp[i] == 's' && user[i] == 'p')
        {
            lose++;
            printf("\nYou LOSE ... \n");
        }
        else if (comp[i] == user[i])
        {
            printf("\nIt's a TIE ...\n");
        }
        printf("\nSCORE  >>>  USER : %d  COMPUTER : %d\n\n---------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n", win, lose);
    }

    return 0;
}