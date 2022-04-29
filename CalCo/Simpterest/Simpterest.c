#include<stdio.h>
#include<stdlib.h>

int main()
{
    float P, R, T;

    printf("Enter Principal Amount P\n");
    scanf("%f", &P);

    printf("Enter Annual Interest Rate R\n");
    scanf("%f", &R);

    printf("Enter Time in Years T\n");
    scanf("%f", &T);
    
    printf("The Interest Amount is %f\n", P*R*T/100);
    printf("The Total Amount is %f\n", P+P*R*T/100);

    system("PAUSE");

    return 0;
    
    }
