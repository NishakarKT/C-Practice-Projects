#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k, l, m, n, p, q, c;
    int matrix1[100][100], matrix2[100][100], matrix3[100][100];

choose:
    printf("Choose an Option.\n1 = What is a Matrix?\n2 = Matrix Multiplication\n");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
        printf("A matrix is a special type of rearrangement of numbers.It consists of Rows and Columns.How about an Example ?\nNumber of Rows : ");
        scanf("%d", &m);
        printf("Number of Columns : ");
        scanf("%d", &n);

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("A%d%d  ", i+1, j+1);
            }
            printf("\n\n");
        }
        goto choose;
        break;

    case 2:
    input:
        printf("Number of Rows for Matrix 1 : ");
        scanf("%d", &m);
        printf("Number of Columns of Matrix 1 : ");
        scanf("%d", &n);
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("A%d%d : ", (i + 1), (j + 1));
                scanf("%d", &matrix1[i][j]);
            }
        }
        printf("Number of Rows for Matrix 2 : ");
        scanf("%d", &p);
        printf("Number of Columns of Matrix 2 : ");
        scanf("%d", &q);
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("A%d%d : ", (i + 1), (j + 1));
                scanf("%d", &matrix2[i][j]);
            }
        }

        if (n != p)
        {
            printf("Invalid Matrices Input...\n");
            goto input;
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                matrix3[i][j]=0;
            }
        }

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                for (k = 0, l = 0; k < n, l < p; k++, l++)
                {
                    matrix3[i][j] = matrix3[i][j]+matrix1[i][k]*matrix2[l][j];
                }
            }
        }

        printf("The Product is : \n\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d ", matrix3[i][j]);
            }
            printf("\n");
        }
        break;

    default:
        goto choose;
        break;
    }

    system("PAUSE");
    return 0;
}