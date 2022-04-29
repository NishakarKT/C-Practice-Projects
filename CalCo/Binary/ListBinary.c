#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef unsigned long long int ulli;

ulli power(int m, int n)
{
    ulli p = 1;
    for (int i = 0; i < n; i++)
        p *= m;

    return p;
}

void binary(ulli num)
{
    ulli n = num;
    int count;
    char binary[60];

    for (int i = 0; i < 59; i++)
    {
        binary[i] = '0';
    }
    binary[59] = '\0';

    for (int i = 0;; i++)
    {
        if (num == 0)
        {
            break;
        }
        count = 0;
        for (int j = 1;; j++)
        {
            if (num / power(2, j) != 0)
            {
                count++;
            }
            else
            {
                num = num - power(2, count);
                binary[count] = '1';
                break;
            }
        }
    }

    count = 0;
    for (int i = 58; i >= 0; i--)
    {
        if (binary[i] != '0')
        {
            break;
        }
        count++;
    }

    printf("%llu ---> ", n);
    for (int i = 58 - count; i >= 0; i--)
    {
        printf("%c", binary[i]);
    }
    printf("\n");
}

int main()
{
    ulli num1, num2;

    printf("Enter 2 Numbers to list out all the the numbers in between, in their Binary forms...\n");

    printf("Enter Num 1 : ");
    scanf("%llu", &num1);
    printf("Enter Num 2 : ");
    scanf("%llu", &num2);

    if (num1 > num2)
    {
        for (int i = num2; i <= num1; i++)
        {binary(i);}
    }
    else if (num2 > num1)
    {
        for (int i = num1; i <= num2; i++)
        {binary(i);}
    }
    else
    {binary(num1);}

    system("PAUSE");
    return 0;
}