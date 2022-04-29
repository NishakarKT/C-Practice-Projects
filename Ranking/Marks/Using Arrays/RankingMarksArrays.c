#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, c, i, j, k, marks[100];
    char s, name[100][100];

    printf("Enter total number of students : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Name of Roll %d : ", (i + 1));
        scanf(" %[^\n]%*c", &name[i]);
        printf("Marks of Roll %d : ", (i + 1));
        scanf("%d", &marks[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = (i + 1); j < n; j++)
        {
            if (marks[j] > marks[i])
            {
                c = marks[j];
                marks[j] = marks[i];
                marks[i] = c;

                for(k=0;k<n;k++)
                {
                    s=name[j][k];
                    name[j][k]=name[i][k];
                    name[i][k]=s;
                }
            }
        }
    }
    printf("RANKLIST ...\n");

    for (i = 0; i < n; i++)
    {
        printf("%d >>> %s (Marks : %d)\n", (i + 1), name[i], marks[i]);
    }
    system("PAUSE");
    return 0;
}