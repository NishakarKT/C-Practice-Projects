#include <stdio.h>

int steps_count = 0;

void towers_of_hanoi(int n, char from, char to, char aux)
{
    if (n == 1)
    {
        printf("%d ---> Disc %d from %c to %c\n", ++steps_count, n, from, to, aux);
        return;
    }

    towers_of_hanoi(n - 1, from, aux, to);
    printf("%d ---> Disc %d from %c to %c\n", ++steps_count, n, from, to);
    towers_of_hanoi(n - 1, aux, to, from);
}

int main()
{
    int n;

start:

    printf("Enter number of discs : ");
    scanf("%d", &n);

    printf("\nSTEPS : \n\n");
    towers_of_hanoi(n, 'A', 'C', 'B');
    printf("\nMin. number of steps required : %d\n\n", steps_count);

    steps_count = 0;
    goto start;

    return 0;
}