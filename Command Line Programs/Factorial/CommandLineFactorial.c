#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, p=1;

    sscanf(argv[1], "%d", &a);
    for (int i = 1; i <= a; i++)
    {
        p = p * i;
    }
    printf("%d ! = %d\n", a, p);

    system("PAUSE");
    return 0;
}