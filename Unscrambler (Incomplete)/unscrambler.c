#include <stdio.h>
#include <string.h>

void initializeToZero(int *num, int len)
{
    for (int i = 0; i < len; i++)
        num[i] = 0;
}

void lowerCaser(char *word)
{
    for (int i = 0; word[i]; i++)
    {
        if (word[i] >= 65 && word[i] <= 90)
            word[i] += 32;
    }
}

int arrcmp(int *num1, int *num2, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (num1[i] != num2[i])
            return 0;
    }
    return 1;
}

void countChars(char *word, int *charCount)
{
    initializeToZero(charCount, 26);

    for (int i = 0; word[i]; i++)
        charCount[word[i] - 97]++;
}

int check(char *word, char *wordF)
{
    int charCount[26];
    int charCountF[26];

    if (strlen(word) != strlen(wordF))
        return 0;

    countChars(word, charCount);
    countChars(wordF, charCountF);
    return arrcmp(charCount, charCountF, 26);
}

void unscramble(char *word)
{
    FILE *fptr = fopen("words.txt", "r");
    char wordF[25];

    while (fscanf(fptr, "%s", wordF) != EOF)
    {
        if (check(word, wordF))
            printf("%s\n", wordF);
    }
}

int main()
{
    char word[25];

    while (1)
    {
        printf("Scrambled : ");
        gets(word);

        lowerCaser(word);

        printf("Unscrambled word(s) :\n");
        unscramble(word);
        printf("\n");
    }

    return 0;
}