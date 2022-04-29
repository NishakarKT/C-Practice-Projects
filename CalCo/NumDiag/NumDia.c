#include<stdio.h>
#include<stdlib.h>

int main()
{
    float N;

    printf("Enter Number Of Sides N (N > 2)\n");
    scanf("%f", &N);

    printf("The Number Of Diagonals is %f\n", 0.5*(N*N-3*N));

    system("PAUSE");

    return 0;

}
