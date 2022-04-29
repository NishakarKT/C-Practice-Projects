#include<stdio.h>
#include<string.h>

typedef unsigned long long int ulli;

ulli power(int m, int n)
{
    ulli p = 1;

    for (int i = 0; i < n; i++)
    {
        p = p * m;
    }
    return p;
}

int main()
{
    ulli num, n;
    int count, z;
    char binary[1000];

start:
    num = 0;

    printf("Choose an option...\n1 = Binary to Integer\n2 = Integer to Binary\n");
    scanf("%d", &z);

    switch (z)
    {
    case 1:
        getchar();
        printf("Enter Binary Number : ");
        gets(binary);

        for (int i = 0; i < strlen(binary); i++)
        {
            if (binary[i] == '1')
            {
                num = num + power(2, strlen(binary) - i - 1);
            }
        }

        printf("%s ---> %llu\n\n", binary, num);
        goto start;
        break;

    case 2:
        printf("Enter Number : ");
        scanf("%llu", &num);
        n = num;
        for (int i = 0; i < 1000; i++)
        {
            if (i == 999)
            {
                binary[i] = '\0';
                break;
            }
            binary[i] = '0';
        }

        for (int i = 0;; i++)
        {
            count = 0;
            for (int j = 1;; j++)
            {
                if (num / power(2, j) != 0)
                {
                    count++;
                }
                else
                {
                    binary[strlen(binary) - count - 1] = '1';
                    num = num - power(2, j - 1);
                    break;
                }
            }

            if (num == 0)
            {
                break;
            }
        }

        count = 0;
        for (int i = 0; i < strlen(binary); i++)
        {
            if (binary[i] != '0')
            {
                break;
            }
            count++;
        }

        printf("%llu --> ", n);
        for (int i = (count); i < strlen(binary); i++)
        {
            printf("%c", binary[i]);
        }
        printf("\n");
        goto start;
        break;

    default:
        printf("Invalid Input...Choose Again...\n");
        goto start;
    }
    return 0;
}