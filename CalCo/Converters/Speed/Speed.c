#include<stdio.h>
#include<stdlib.h>

int main()

{
    float S;

    printf("SPEED CONVERTER!!!\nConversion Of Speed(In Metres Per Second) Into Various Speed Measuring Units\n");

    printf("Enter Speed 'S'(In Metres Per Second)\n");
    scanf("%f", &S);

    printf("Speed in Miles Per Hour %f\n", S*2.23694);
    printf("Speed in Feet Per Second %f\n", S*3.28084);
    printf("Speed in KiloMetre Per Hour %f\n", S*3.6);
    printf("Speed in Knots %f\n", S*1.94384);
    
    system("PAUSE");

    return 0;

}