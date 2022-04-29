#include<stdio.h>
#include<stdlib.h>

int main()
{
    float A;

    printf("AREA COVERTER!!!\nConvert Area (In Sq. Metres) To Other Common Area Measuring Units.\n");

    printf("Enter Area (In Sq Metres) 'A'\n");
    scanf("%f", &A);

    printf("Area In Sq Centimetres is %f\n", A*10000);
    printf("Area In Sq Milimetres is %f\n", A*1000000);
    printf("Area In Sq Kilometres is %f\n", A*0.000001);
    printf("Area In Sq Miles is %f\n", A*3.861*0.0000001);
    printf("Area In Sq Yards is %f\n", A*1.19599);
    printf("Area In Sq feet is %f\n", A*10.7639);
    printf("Area In Sq Inches is %f\n", A*1550);
    printf("Area In Acre is %f\n", A*0.000247105);
    printf("Area In Hectare is %f\n", A*0.0001);

    system("PAUSE");

    return 0;

}