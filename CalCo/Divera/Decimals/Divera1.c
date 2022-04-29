#include<stdio.h>
#include<stdlib.h>

int main()
{
    float N, D;

    printf("Enter Numerator N\n");
    scanf("%f", &N);

    printf("Enter Denominator D\n");
    scanf("%f", &D);

    printf("The Fraction is %f\n", N/D);

    system("PAUSE");

    return 0;
    
    }