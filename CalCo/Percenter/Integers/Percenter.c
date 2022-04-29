#include <stdio.h>
#include <stdlib.h>

int main()

{
    int N, D;

    printf("Enter Numerator N\n");
    scanf("%d", &N);

    printf("Enter Denominator D\n");
    scanf("%d", &D);

    printf("The Percentage is %d\n", N*100/D);

    system("PAUSE");

    return 0;

}