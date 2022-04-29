#include <stdio.h>

int main()
{
    FILE *fptr1 = NULL;
    FILE *fptr2 = NULL;
    char fileName1[100];
    char fileName2[100];
    char c;

    printf("Copy from : ");
    gets(fileName1);
    printf("Copy to : ");
    gets(fileName2);

    fptr1 = fopen(fileName1, "r");
    fptr2 = fopen(fileName2, "w");

    while((c = fgetc(fptr1)) != EOF)
        fputc(c, fptr2);
    
    fclose(fptr1);
    fclose(fptr2);

    return 0;
}