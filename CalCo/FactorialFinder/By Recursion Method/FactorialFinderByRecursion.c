#include <stdio.h>
#include <stdlib.h>

int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return (num*factorial(num - 1));
    }
}

int main()
{
    int num;
    printf("Enter the number you want the factorial of.\n");
    scanf("%d", &num);

    printf("%d! = %d\n", num, factorial(num));

    system("PAUSE");
    return 0;
}