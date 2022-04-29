#include <stdio.h>
#include <string.h>

char *findMeaning(char *word, char *meaning)
{
    char wordF[100];
    FILE *fptr = fopen("dictionary.txt", "r");

    while (fscanf(fptr, "%s", wordF) != EOF)
    {
        // Note that there two space characters after the main word.
        fgetc(fptr); // system absors the first space character after the word.
        
        if (strcmp(word, wordF) == 0 && fgetc(fptr) ==' ') // second fgetc checks for the seconf space character after the main word.
        {
            fgets(meaning, 1000, fptr);
            break;
        }
    }

    fclose(fptr);
    return meaning;
}
void caseSetter(char *word)
{
    for (int i = 0; word[i]; i++)
    {
        if (word[i] >= 65 && word[i] <= 90)
            word[i] += 32;
    }
    word[0] -= 32; // first letter uppercased for dictionary to operate properly.
}

int main()
{
    char word[100];
    char meaning[1000];

    while (1)
    {
        printf("\nEnter word : ");
        gets(word);

        caseSetter(word);

        findMeaning(word, meaning);

        printf("%s ==> %s", word, meaning);
    }

    return 0;
}