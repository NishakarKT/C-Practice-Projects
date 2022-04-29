#include <stdio.h>
#include <string.h>

void clear(FILE *fptr, char *fileName)
{
    fptr = fopen(fileName, "w");
    fclose(fptr);
}

void append(FILE *fptr, char *fileName, char *text)
{
    fptr = fopen(fileName, "a");
    fprintf(fptr, text);
    fprintf(fptr, "\n");
    fclose(fptr);
}

char *lowerCaser(char *str)
{
    for (int i = 0; str[i]; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
    }
    return str;
}

int main()
{
    FILE *fptr = NULL;
    char text[1000], fileName[100];

    printf("Enter file name : ");
    gets(fileName);

    clear(fptr, fileName);

    while (1)
    {
        printf(">>> ");
        gets(text);
        
        if (strcmp(lowerCaser(text), "clear") == 0)
            clear(fptr, fileName);
        else if (strcmp(lowerCaser(text), "exit") == 0)
            break;
        else
            append(fptr, fileName, text);
    }

    return 0;
}