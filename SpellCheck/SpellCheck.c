#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Accurate for big words.

int check(char *word, char *wordF)
{
    int matches = 0;

    if (abs(strlen(word) - strlen(wordF)) > 1)
        return 0;

    for (int i = 0; word[i]; i++)
    {
        if ((i == 0) && ((word[i] == wordF[i]) || (word[i] == wordF[i + 1])))
            matches++;
        else if (!word[i + 1] && ((word[i] == wordF[i]) || (word[i] == wordF[i-1])))
            matches++;
        else if ((word[i] == wordF[i-1]) || (word[i] == wordF[i]) || (word[i] == wordF[i + 1]))
            matches++;
    }

    return matches;
}

void spellCheck(char *word)
{
    FILE *fptr = NULL;
    fptr = fopen("words.txt", "r");
    int maxMatches = 0, matches = 0;
    int index = 0, linesCount = 0;
    char wordF[100];

    while (fscanf(fptr, "%s", wordF) != EOF)
    {
        linesCount++;
        matches = check(word, wordF);
        if (maxMatches < matches)
        {
            maxMatches = matches;
            index = linesCount;
        }
    }
    fclose(fptr);

    printf("%d\n", index);
    fptr = fopen("words.txt", "r");
    while (1)
    {
        fscanf(fptr, "%s", wordF);
        index--;
        if (!index)
        {
            strcpy(word, wordF);
            break;
        }
    }
    fclose(fptr);
}

int main()
{
    char word[100];

    printf("Enter word : ");
    gets(word);
    spellCheck(word);
    printf("-> %s\n", word);
    return 0;
}