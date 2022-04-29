#include<stdio.h>
#include<stdlib.h>

int main()
{
    float T;

    printf("TIME COVERTER!!!\nHere You Can Convert Time (In Days) To Various Common Time Measuring Units.\n");

    printf("Enter Time 'T'(In Days) \n");
    scanf("%f", &T);

    printf("The Converted Time In MiliSeconds = %f\n", T*8.64*10000000);
    printf("The Converted Time In Seconds = %f\n", T*86400);
    printf("The Converted Time In Minutes = %f\n", T*1440);
    printf("The Converted Time In Hours = %f\n", T*24);
    printf("The Converted Time In Weeks = %f\n", T*0.142857);
    printf("The Converted Time In Months = %f\n", T*0.0328767);
    printf("The Converted Time In Calendar Years = %f\n", T*0.00273973);
    printf("The Converted Time In Decades = %f\n", T*0.000273973);
    printf("The Converted Time In Centuries = %f\n", T*0.0000273973);

    system("PAUSE");

    return 0;

}