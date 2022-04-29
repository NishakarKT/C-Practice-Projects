#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    double D;

    printf("WELCOME TO DIGIBITS!!!\nHere You Can Convert Digital Storage Value(In MegaBytes) To Other Common Units Of Digital Storage.\n");

    printf("Enter Digital Storage Value (In MegaBytes) 'D'\n");
    scanf("%lf", &D);

    printf("In Bits = %0.12lf\n", D*8000000);
    printf("In Bytes = %0.12lf\n", D*1000000);
    printf("In KibiBits = %0.12lf\n", D*7812.5);
    printf("In KibiBytes = %0.12lf\n", D*976.563);
    printf("In KiloBits = %0.12lf\n", D*8000);
    printf("In KiloBytes = %0.12lf\n", D*1000);
    printf("In MebiBits = %0.12lf\n", D*7.62939);
    printf("In MebiBytes = %0.12lf\n", D*0.953674);
    printf("In MegaBits = %0.12lf\n", D*8);
    printf("In GibiBits = %0.12lf\n", D*0.00745058);
    printf("In GibiBytes = %0.12lf\n", D*0.000931323);
    printf("In GigaBits = %0.12lf\n", D*0.008);
    printf("In GigaBytes = %0.12lf\n", D*0.001);
    printf("In TebiBits = %0.12lf\n", D*7.27*0.000001);
    printf("In TebiBytes = %0.12lf\n", D*9.0949*0.0000001);
    printf("In TeraBits = %0.12lf\n", D*8*0.000001);
    printf("In TeraBytes = %0.12lf\n", D*0.000001);
    printf("In PebiBits = %0.12lf\n", D*7.1054*0.000000001);
    printf("In PebiBytes = %0.12lf\n", D*8.8818*0.0000000001);
    printf("In PetaBits = %0.12lf\n", D*8*0.000000001);
    printf("In PetaBytes = %0.12lf\n", D*0.000000001);

    system("PAUSE");

    return 0;

}