#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int palindrome1(int n)
{
    int rev = 0, a = n;

    while (n != 0)
    {
        rev = rev*10 + (n % 10);
        n = n / 10;
    }

    if (rev == a)
    {
        return 1;
    }
}

int palindrome(int n, int z)
{
    int a = n;
    int num[z], num1 = 0;

    for (int i = 0; i < z; i++)
    {
        num[i] = n % 10;
        n = n / 10;
    }

    for (int i = 0; i < z; i++)
    {
        num1 = num1 + num[i] * pow(10, z - 1 - i);
    }

    if (num1 == a)
    {
        return 1;
    }
}

int main()
{
    int a, n, z = 0;

    printf("Enter a Number to check if its a Palindrome : \n");
    scanf("%d", &n);

    /*for (int i = 0; i < 10; i++)
    {
        if ((n / (int)(pow(10, i)) == 0))
        {
            z = i;
            break;
        }
    }
    
    a = palindrome(n, z);*/

    //OR

    a = palindrome1(n);

    if (a == 1)
    {
        printf("%d is a Palindrome...\n", n);
    }
    else
    {
        printf("%d is NOT a Palindrome...\n", n);
    }

    system("PAUSE");
    return 0;
}