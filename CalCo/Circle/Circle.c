#include<stdio.h>
#include<stdlib.h>

int main()
{
    float R;

    printf("Enter Radius R\n");
    scanf("%f", &R);

    printf("The Diameter is %f\n", 2*R);
    printf("The Circumference is %f\n", R*2*22/7);
    printf("The Area is %f\n", R*R*22/7);
    printf("Area of Square Inscribing Circle is %f\n", (2*R)*(2*R));
    printf("Area of Circumscribed Square is %f\n", 0.5*(2*R)*(2*R));

    system("PAUSE");

    return 0;
    
    }