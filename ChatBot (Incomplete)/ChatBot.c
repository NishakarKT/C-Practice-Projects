#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a, i, j, k, t, tick[10];
    char user[100];
    char alp[26] = {"abcdefghijklmnopqrstuvwxyz"}, Alp[26] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char check[10][100] = {"How are you ?", "I am fine.", "I am sad."};
    char sol[10][100] = {"I am great! Thanks for asking! What about you \?", "Good to hear :)", "Why ??? What happened ?"};

start:
    printf("\n                        >>> ");
    gets(user);
    printf("\n");

    //reset tick
    for (i = 0; i < 10; i++)
    {
        tick[i] = 0;
    }

    //First letter Upper-casing
    for (i = 0; i < 26; i++)
    {
        if (user[0] == alp[i])
        {
            user[0] = Alp[i];
        }
    }

    //Full stopper
    if (user[strlen(user) - 1] != '.')
    {
        user[strlen(user)] = '.';
        user[strlen(user) + 1] = '\0';
    }

    //bot
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < strlen(user); j++)
        {
            for (k = 0; k < 100; k++)
            {
                if (user[j] == check[i][k] && user[j] != ' ')
                {
                    tick[i]++;
                }
            }
        }
    }

    for (i = 0; i < 10; i++)
    {
        for (j = (i + 1); j < 10; j++)
        {
            if (tick[i] > tick[j])
            {
                t = i;
            }
        }
    }

    if (tick[t] >= 5)
    {
        printf("ChatBot : %s\n", sol[t]);
        goto start;
    }
    else
    {
        printf("ChatBot : Sorry...I didn't get you...\n");
        goto start;
    }

    return 0;
}