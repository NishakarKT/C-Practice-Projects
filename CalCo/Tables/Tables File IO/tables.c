#include <stdio.h>
#include <limits.h>

int main()
{
    FILE *fptr = NULL;
    char fileName[FILENAME_MAX];
    int m, n;

    printf("Enter m : ");
    scanf("%d", &m);
    printf("Enter n : ");
    scanf("%d", &n);

    for (int i = 1; i <= m; i++)
    {
        snprintf(fileName, sizeof(fileName), "tablesTxt\\Table-%d.txt", i);
        fptr = fopen(fileName, "w");
        for (int j = 1; j <= n; j++)
            fprintf(fptr, "%d x %d = %d\n", i, j, i * j);
        fclose(fptr);
    }

    return 0;
}