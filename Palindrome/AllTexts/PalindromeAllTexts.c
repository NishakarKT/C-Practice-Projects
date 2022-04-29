#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindrome(char arr[], int n)
{
    int check = 0;

    if(n<=3)
    {
        if(n==1)
        {
            return 1;
        }

        else if(n==2)
        {
            if(arr[0]==arr[1])
            {
                return 1;
            }
        }

        else if(n==3)
        {
            if(arr[0]==arr[2])
            {
                return 1;
            }
        }
    }

    else if (n > 3)
    {
        if (n % 2 == 0) //EVEN
        {
            for (int i = 0; i < (n / 2); i++)
            {
                if (arr[i] == arr[n - i - 1])
                {
                    check++;
                }
            }

            if (check == (n / 2))
            {
                return 1;
            }
        }

        else if (n % 2 != 0) //EVEN
        {
            for (int i = 0; i < (n - 1 / 2); i++)
            {
                if (arr[i] == arr[n - i - 1])
                {
                    check++;
                }
            }

            if (check == (n - 1 / 2))
            {
                return 1;
            }
        }
    }
}

int palindrome1(char arr[])
{
    char rev[100];

    strcpy(rev, strrev(arr)); //here even arr is reversed.

    strrev(arr); //so we reverse it back again.

    if (strcmp(arr, rev) == 0)
    {
        return 1;
    }
}

int main()
{
    int a, n;
    char user[100];

    printf("Enter a number/word/text stream etc. to check whether its a Palindrome (Same when reversed)\n");
    scanf(" %[^\n]%*c", &user);

    n = strlen(user);
    a = palindrome(user, n);

    //a=palindrome1(user);

    if (a == 1)
    {
        printf("%s IS a Palindrome...\n", user);
    }
    else if (a != 1)
    {
        printf("%s IS NOT a Palindrome...\n", user);
    }

    system("PAUSE");
    return 0;
}