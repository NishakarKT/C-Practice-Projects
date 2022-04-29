#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b;
    
    printf("Enter Numerator.\n");
    scanf("%d", &a);
    printf("Enter Denominator.\n");
    scanf("%d", &b);

    printf("The Remainder Is %d\n", a%b);

    system("PAUSE");
    return 0;
}