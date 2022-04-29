#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
    int a, b, u, l, n, z;

start:

    printf("Enter Lottery Number Digits : ");
    scanf("%d", &n);
    printf("Your Lottery Number : ");
    scanf("%d", &u);

    srand(time(NULL));

    a = pow(10, n - 1);
    b = pow(10, (n));

    l = rand() % (b - a) + a;

    if (u == l)
    {
        printf("Wining Number : %d\n", l);
        printf("YOU WON THE LOTTERY !!!\n");
    }
    else
    {
        printf("Wining Number : %d\n", l);
        printf("Better luck next time...\n");
    }

    printf("1 = Play Again\n2 = Exit");
    scanf("%d", &z);

    switch (z)
    {
    case 1:
        goto start;
        break;

    case 2:
        printf("Thanks for playing ...\n");
        system("PAUSE");
        exit(0);
        break;

    default:
        goto start;
        break;
    }

    system("PAUSE");
    return 0;
}