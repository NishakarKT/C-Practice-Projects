#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int a, z, userS, compS;
    char name[50], user[10], comp[10];
    char choice[3][10] = {"rock", "paper", "scissors"};

start:

    printf("Enter your Name : ");
    scanf("%[^\n]%*c", &name);

    userS = 0;
    compS = 0;

    again:

    printf("\nEnter 'rock', 'paper' or 'scissors'\n'end' to END the game...\n\n%s : ", name);
    scanf(" %[^\n]%*c", &user);
    printf("\n");

    if (strcmp(user, "end") == 0)
    {
        goto end;
    }

    srand(time(NULL));
    a = (rand() % 3 + 1);

    if (a == 1)
    {
        strcpy(comp, choice[0]);
        printf("Computer : %s\n", choice[0]);
    }
    else if (a == 2)
    {
        strcpy(comp, choice[1]);
        printf("Computer : %s\n", choice[1]);
    }
    else if (a == 3)
    {
        strcpy(comp, choice[2]);
        printf("Computer : %s\n", choice[2]);
    }

    if (strcmp(comp, "rock") == 0 && strcmp(user, "rock") == 0)
    {
        printf("\nIt's a TIE !!!\n");
        printf("\nSCORE >>> %s : %d    Computer : %d\n", name, userS, compS);
        printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        goto again;
    }
    else if (strcmp(comp, "rock") == 0 && strcmp(user, "paper") == 0)
    {
        printf("\nPaper stretches and covers the Rock!!!\n\n%s WINS !!!\n", name);
        userS++;
        printf("\nSCORE >>> %s : %d    Computer : %d\n", name, userS, compS);
        printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        goto again;
    }
    else if (strcmp(comp, "rock") == 0 && strcmp(user, "scissors") == 0)
    {
        printf("\nRock breaks the Scissors !!!\n\nComputer WINS !!!\n");
        compS++;
        printf("\nSCORE >>> %s : %d    Computer : %d\n", name, userS, compS);
        printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        goto again;
    }
    else if (strcmp(comp, "paper") == 0 && strcmp(user, "rock") == 0)
    {
        printf("\nPaper stretches and covers the Rock!!!\n\nComputer WINS !!!\n");
        compS++;
        printf("\nSCORE >>> %s : %d    Computer : %d\n", name, userS, compS);
        printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        goto again;
    }
    else if (strcmp(comp, "paper") == 0 && strcmp(user, "paper") == 0)
    {
        printf("\nIt's a TIE !!!\n");
        printf("\nSCORE >>> %s : %d    Computer : %d\n", name, userS, compS);
        printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        goto again;
    }
    else if (strcmp(comp, "paper") == 0 && strcmp(user, "scissors") == 0)
    {
        printf("\nScissors cuts away the Paper !!!\n\n%s WINS\n", name);
        userS++;
        printf("\nSCORE >>> %s : %d    Computer : %d\n", name, userS, compS);
        printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        goto again;
    }
    else if (strcmp(comp, "scissors") == 0 && strcmp(user, "rock") == 0)
    {
        printf("\nRock breaks the Scissors !!!\n\n%s WINS !!!\n", name);
        userS++;
        printf("\nSCORE >>> %s : %d    Computer : %d\n", name, userS, compS);
        printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        goto again;
    }
    else if (strcmp(comp, "scissors") == 0 && strcmp(user, "paper") == 0)
    {
        printf("\nScissors cuts away the Paper !!!\n\nComputer WINS\n");
        compS++;
        printf("\nSCORE >>> %s : %d    Computer : %d\n", name, userS, compS);
        printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        goto again;
    }
    else if (strcmp(comp, "scissors") == 0 && strcmp(user, "scissors") == 0)
    {
        printf("\nIt's a TIE !!!\n");
        printf("\nSCORE >>> %s : %d    Computer : %d\n", name, userS, compS);
        printf("\n----------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        goto again;
    }

    

    end:

    if (userS > compS)
    {
        printf("\n%s WINS the game !!!\n");
        printf("\nSCORE >>> %s : %d    Computer : %d\n", name, userS, compS);
        printf("1 = Play Again    2 = Exit\n");
        scanf("%d", &z);
        switch (z)
        {
        case 1:
            goto start;
            break;

        case 2:
            printf("\nThanks for playing...\n");
            system("PAUSE");
            exit(0);
            break;

        default:
            goto start;
            break;
        }
    }
    else if (userS < compS)
    {
        printf("\nComputer WINS the game !!!\nBetter luck next time...\n");
        printf("\nSCORE >>> %s : %d    Computer : %d\n", name, userS, compS);
        printf("1 = Play Again    2 = Exit\n");
        scanf("%d", &z);
        switch (z)
        {
        case 1:
            goto start;
            break;

        case 2:
            printf("\nThanks for playing...\n");
            system("PAUSE");
            exit(0);
            break;

        default:
            goto start;
            break;
        }
    }

    else if (userS == compS)
    {
        printf("\nThe game ends in TIE...\n");
        printf("\nSCORE >>> %s : %d    Computer : %d\n", name, userS, compS);
        printf("1 = Play Again    2 = Exit\n");
        scanf("%d", &z);
        switch (z)
        {
        case 1:
            goto start;
            break;

        case 2:
            printf("\nThanks for playing...\n");
            system("PAUSE");
            exit(0);
            break;

        default:
            goto start;
            break;
        }
    }

    return 0;
}
