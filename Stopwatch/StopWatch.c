#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, z;
    clock_t start, end;

    reuse :

    printf("Press any key to start... (Enter '0' to STOP)\n");
    system("PAUSE");
    printf("...\n");

    start = clock();

    retry:

    scanf("%d", &a);
    if(a==0)
    {
        end = clock();
        printf("Time elapsed : %0.6lf\n", ((double)(end-start)) / CLOCKS_PER_SEC);
        goto end;
    }
    goto retry;
    end:

    printf("Choose an Option...\n1 = Reset\n2 = Exit\n");
    scanf("%d", &z);
    switch(z)
    {
        case 1:
        goto reuse;
        break;

        case 2:
        printf("Thanks for using Stopwatch ...\n");
        system("PAUSE");
        exit(0);
        break;

        default :
        goto reuse;
        break;
    }

    system("PAUSE");
    return 0;
}