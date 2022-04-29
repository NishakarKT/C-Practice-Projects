#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n;
    char word[100][15], c[15];

    printf("Enter number of words you want to arrange in Aphabetical Order : ");
    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++)
    {
        printf("Enter Word %d : ", i + 1);
        gets(word[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (strcmp(word[j], word[i]) == 1)
            {
                strcpy(c, word[j]);
                strcpy(word[j], word[i]);
                strcpy(word[i], c);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", word[i]);
    }

    system("PAUSE");
    return 0;
}