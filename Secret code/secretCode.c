#include <stdio.h>
#include <string.h>

char codes[256][20];

void createCodeTable()
{
    FILE *fptr = fopen("codeTable.txt", "w");
    char codes[] = {'+', '-', '*', '/'};

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            for (int k = 0; k < 4; k++)
                for (int l = 0; l < 4; l++)
                    fprintf(fptr, "%c%c%c%c\n", codes[i], codes[j], codes[k], codes[l]);

    fclose(fptr);
}

void readCodes()
{
    FILE *fptr = fopen("codeTable.txt", "r");

    for (int i = 0; fscanf(fptr, "%s", codes[i]) != EOF; i++)
        ;

    fclose(fptr);
}

void preProcessing()
{
    readCodes();
    createCodeTable();
}

void encode(char *text)
{
    FILE *fptr = fopen("code.txt", "w");

    for (int i = 0; text[i]; i++)
        fprintf(fptr, "%s|", codes[text[i]]);
    fprintf(fptr, "\n");

    fclose(fptr);
}

char getCharFromCode(char *code)
{
    for (int i = 0; i < 128; i++)
    {
        if (strcmp(code, codes[i]) == 0)
            return i;
    }
    return '\0';
}
void decode()
{
    FILE *fptr1 = fopen("code.txt", "r");
    FILE *fptr2 = fopen("decode.txt", "w");
    char code[5];

    for (int i = 0; (code[i] = fgetc(fptr1)) != EOF; i++)
    {
        if (code[i] == '|')
        {
            code[i] = '\0';
            fprintf(fptr2, "%c", getCharFromCode(code));
            i = -1;
        }
    }

    fclose(fptr1);
    fclose(fptr2);
}

int main()
{
    preProcessing();

    char text[1000];

    printf("Enter text : ");
    gets(text);

    encode(text);
    decode();

    return 0;
}