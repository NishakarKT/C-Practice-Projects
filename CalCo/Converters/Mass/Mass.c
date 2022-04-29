#include<stdio.h>
#include<stdlib.h>

int main()

{
    float M;

    printf("MASS CONVERTER!!!\nConversion Of Mass(In KiloGrams) Into Various Mass Units\n");

    printf("Enter Mass 'W'(In Kilograms)\n");
    scanf("%f", &M);

    printf("Mass in Grams equals %f\n", M*1000);
    printf("Mass in Miligrams equals %f\n", M*1000000);
    printf("Mass in Pounds equals %f\n", M*2.20462);
    printf("Mass in Ounces equals %f\n", M*35.274);
    printf("Mass in Tonne equals %f\n", M*0.001);
    printf("Mass in Quintal equals %f\n", M*0.01);
    printf("Mass in Stone equals %f\n", M*6.35029);
    printf("Mass in Imperial Ton equals %f\n", M*0.000984207);
    printf("Mass in US Ton equMass\n", M*0.00110231);

    system("PAUSE");

    return 0;

}