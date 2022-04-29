#include<stdio.h>
#include<stdlib.h>

int main()
{
    float U, L, T;
    
    printf("WELCOME TO CONVERTEMP!!!\nFahrenheit Scale  BP = 212  MP = 32\nKelvin Scale      BP = 373  MP = 273\nReumer Scale      BP = 80   MP = 0\n");

    printf("Enter Upper Limit(BP) 'U'\n");
    scanf("%f", &U);

    printf("Enter Lower Limit(MP) 'L'\n");
    scanf("%f", &L);

    printf("Enter Temperature 'T'(In Celsius Scale)\n");
    scanf("%f", &T);

    printf("The Converted Temperature is %f\n", L+(U-L)*T/100);

    system("PAUSE");

    return 0;
    
}