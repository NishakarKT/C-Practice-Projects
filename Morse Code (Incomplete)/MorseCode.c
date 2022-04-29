#include <stdio.h>
#include <string.h>

char *encodeChar(char c, char *code)
{
    FILE *fptr = fopen("MorseTable.txt", "r");
    char cF;

    for (; (cF = fgetc(fptr));)
    {
        if (cF == c)
        {
            for (int j = 0;; j++)
            {
                if ((cF = fgetc(fptr)) == '\n')
                {
                    code[j] = '\0';
                    break;
                }
                code[j] = cF;
            }
            return code;
        }
    }
    return "1";
}

void encode(char *text)
{
    FILE *fptr = fopen("code.txt", "w");
    char charCode[10];

    for (int i = 0; text[i]; i++)
    {
        encodeChar(text[i], charCode);
        fprintf(fptr, charCode);
    }
    fclose(fptr);
}

void decode(char *fileName)
{
    FILE *fptr1 = fopen(fileName, "r");
    FILE *fptr2 = fopen("decode.txt", "w");
    int i = 0;
    char cF;

    char charCode[10];

    while ((cF = fgetc(fptr1)) != EOF)
    {
        charCode[i] = cF;
        charCode[++i] = '\0';
    }

    fclose(fptr1);
    fclose(fptr2);
}

int main()
{
    char text[1000];

    printf("Enter text : ");
    gets(text);

    // encode(text);
    decode("code.txt");
    return 0;
}