#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int e, i, j, k, l, check;
    char alphabet[26] = "abcdefghijklmnopqrstuvwxyz", Alphabet[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char user[1000], ques[100][1000] = {"How are you \?","I am fine.", "I am doing great."}, ans[100][1000] = {"I am feeling great!!! Thanks for asking ! What about you \?","Good to hear :)","Good to hear :)"};

    printf("ChatBot : How may I help you \?\n");

start:

    printf("\nUser : ");
    gets(user);

    for (i = 0; i < 26; i++)
    {
        if (user[0] == alphabet[i])
        {
            user[0] = Alphabet[i];
        }
    }

    for (i = 0;; i++)
    {
        for (j = 0; j < 100; j++)
        {
            if (user[i] == ques[j][0])
            {
                check = 0;
                for (k = 0, l = i;; k++, l++)
                {
                    if (user[l] == ques[j][k])
                    {
                        check++;
                    }
                    if (ques[j][k] == '\0')
                    {
                        break;
                    }
                }
                if (check >= 8)
                {
                    printf("\nChatBot : %s\n", ans[j]);
                    goto start;
                }
                else
                {
                    printf("\nChatBot : Sorry... I did't get you.\n");
                    goto start;
                }
            }
        }
        if (user[i] == '\0')
        {
            break;
        }
    }
    system("PAUSE");
    return 0;
}