#include<stdio.h>
#include<stdlib.h>
 int main()

 {
    float E;

    printf("ENERGY CONVERTER!!!\nConvert Energy (In Joules) To Various Energy Measuring Units\n");

    printf("Enter Energy (In Joules) 'E'\n");
    scanf("%f", &E);

    printf("E In KiloJoules Equals %f\n", E*0.001);
    printf("E In Calories Equals %f\n", E*0.239006);
    printf("E In KiloCalories Equals %f\n", E*0.000239006);
    printf("E In WattHours Equals %f\n", E*0.00027778);
    printf("E In ElectronVolts Equals %f\n", E*6.242*1000000000000000000);
    printf("E In Foot-Pounds Equals %f\n", E*0.737562);

    system("PAUSE");

    return 0;

 }