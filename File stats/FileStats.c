#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int scale = 100;

void fileAnalysis(char *fileName, int *dataChars)
{
    FILE *fptr;
    char c;

    printf("Analysis : STARTED : ");
    fptr = fopen(fileName, "r");

    while ((c = fgetc(fptr)) != EOF)
        dataChars[c]++;

    printf("FINISHED\n");

    fclose(fptr);
}

void initialzeToZero(int *dataChars, int dataCharsSize)
{
    for (int i = 0; i < dataCharsSize; i++)
        dataChars[i] = 0;
}

int findMax(int *num, int len)
{
    int max = num[0];

    for (int i = 0; i < len; i++)
    {
        if (max < num[i])
            max = num[i];
    }
    return max;
}

void graphPlot(int *dataChars, int dataCharsSize)
{
    int scaleFactor = scale;
    int scaleTrack;

    printf("\n\n");
    for (int i = 32; i <= 126; i++)
    {
        scaleTrack = 0;
        printf("%c : ", i);
        for (int j = findMax(dataChars, dataCharsSize); j > 0; j--)
        {
            if (dataChars[i] >= j)
                scaleTrack++;

            if (scaleTrack == scaleFactor)
            {
                printf("|");
                scaleTrack = 0;
            }
        }
        printf("\n");
    }
}

void charactersCount(int *dataChars)
{
    printf("\nCharacters Count : \n");
    for (int i = 32; i <= 126; i++)
        printf("%c --> %d\n", i, dataChars[i]);
    printf("\n");
}

void characterCount(int *dataChars)
{
    getchar();

    char c;
    printf("\n\nEnter a character : ");
    c = getchar();
    printf("\"%c\" appeared %d times\n\n", c, dataChars[c]);
}

int isPresent(char *word, char list[][100], int count)
{
    for (int i = 0; i <= count; i++)
    {
        if (strcmp(word, list[i]) == 0)
            return i;
    }
    return -1;
}

void printWords(char words[][100], int *wordCounts, int size)
{
    for (int i = 0; i < size; i++)
        printf("%s --> %d\n", words[i], wordCounts[i]);
}

void lowerCaser(char *str)
{
    for(int i=0; str[i]; i++)
    {
        if(str[i] >= 65 && str[i] <= 90)
            str[i]+=32;
    }
}

void wordsCount(char *fileName)
{
    FILE *fptr = NULL;
    char word[100], words[1000][100];
    int index = 0, count = 0, wordFreq[1000];

    initialzeToZero(wordFreq, 1000);
    fptr = fopen(fileName, "r");

    for (int i = 0; fscanf(fptr, "%s", word) != EOF; i++)
    {
        lowerCaser(word);

        index = isPresent(word, words, count);
        if (index >= 0)
            wordFreq[index]++;
        else
        {
            strcpy(words[count], word);
            count++;
            wordFreq[count]++;
        }
    }
    printWords(words, wordFreq, count);
    printf("\n");
}

void wordCount(char *fileName)
{
    getchar();
    FILE *fptr = NULL;
    fptr = fopen(fileName, "r");
    char word[100], wordF[100];
    int count = 0;

    printf("Enter a word : ");
    gets(word);

    while (fscanf(fptr, "%s", wordF) != EOF)
    {
        if (strcmp(wordF, word) == 0)
            count++;
    }

    printf("\"%s\" appeared %d times\n", word, count);
}

int choiceAnalysis()
{
    int choice;

    printf("\n0 = Exit\n");
    printf("1 = Characters\n");
    printf("2 = Words\n");
    printf("User : ");
    scanf("%d", &choice);

    return choice;
}

int choiceCharactersCount()
{
    int choice;

    printf("\n0 = return to Main Menu\n");
    printf("1 = check for a character\n");
    printf("2 = all characters\n");
    printf("3 = characters count histogram\n");
    printf("User : ");
    scanf("%d", &choice);

    return choice;
}

int choiceWordsCount()
{
    int choice;

    printf("\n0 = Return to Main Menu\n");
    printf("1 = check for a word\n");
    printf("2 = all words\n");
    printf("User : ");
    scanf("%d", &choice);

    return choice;
}

int main()
{
    int dataChars[128];
    char fileName[100];

    initialzeToZero(dataChars, 128);

    printf("Enter a file name : ");
    gets(fileName);
    fileAnalysis(fileName, dataChars);

    while (1)
    {
        switch (choiceAnalysis())
        {
        case 1:
            switch (choiceCharactersCount())
            {
            case 1:
                characterCount(dataChars);
                break;

            case 2:
                charactersCount(dataChars);
                break;

            case 3:
                graphPlot(dataChars, 128);
                break;

            case 0:
                continue;
            }
            break;

        case 2:
            switch (choiceWordsCount())
            {
            case 1:
                wordCount(fileName);
                break;

            case 2:
                wordsCount(fileName);
                break;

            case 0:
                continue;
            }
            break;

        case 0:
            exit(0);
        }
    }

    return 0;
}