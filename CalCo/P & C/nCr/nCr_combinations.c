#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    int p = 1;
    for (int i = 1; i <= n; i++)
    {
        p *= i;
    }
    return p;
}

int ncr(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}

int main()
{
    int n, r;

    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter r : ");
    scanf("%d", &r);

    printf("(%d C %d) = %d\n", n, r, ncr(n, r));

    system("PAUSE");
    return 0;
}