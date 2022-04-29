#include<stdio.h>
#include<stdlib.h>

int main()
{
    float P;

    printf("PLANE ANGLE CONVERTER!!!\nHere You Can Convert Plane Angles (In Degrees) To Various Common Plane Angle Measuring Units.\n");
    printf("Enter Plane Angle 'P'(In Degrees) \n");
    scanf("%f", &P);

    printf("The Converted Plane Angle In Gradians = %f\n", P*1.11111);
    printf("The Converted Plane Angle In MiliRadians = %f\n", P*17.4533);
    printf("The Converted Plane Angle In Radians = %f\n", P*0.0174533);
    printf("The Converted Plane Angle In Minutes Of Arc = %f\n", P*60);
    printf("The Converted Plane Angle In Seconds Of Arc = %f\n", P*3600);
    
    system("PAUSE");

    return 0;

}