#include<stdio.h>
#include<stdlib.h>
 int main()

 {
    float L;

    printf("LENGTH CONVERTER!!!\nConvert Length (In Metres) To Various Measuring Units\n");

    printf("Enter Length (In Metres) 'L'\n");
    scanf("%f", &L);

    printf("L In CentiMetres Equals %f\n", L*100);
    printf("L In MiliMetres Equals %f\n", L*1000);
    printf("L In KiloMetres Equals %f\n", L*0.001);
    printf("L In Miles Equals %f\n", L*0.000621371);
    printf("L In Yards Equals %f\n", L*1.09361);
    printf("L In Feet Equals %f\n", L*3.28084);
    printf("L In Inches Equals %f\n", L*39.3701);
    printf("L In Nautical Miles Equals %f\n", L*0.000539957);

    system("PAUSE");

    return 0;

 }