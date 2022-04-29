#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Edistance(double x1, double y1, double x2, double y2)
{
    return pow(pow((x2 - x1), 2) + pow((y2 - y1), 2), 1 / 2);
}

double area(double x1, double y1, double x2, double y2, double (*ptr)(double, double, double, double))
{
    return (22 * pow(ptr(x1, y1, x2, y2), 2)) / 7;
}

int main()
{
    double x1, y1, x2, y2;
    double (*ptr)(double, double, double, double);
    ptr = &Edistance;

    printf("x1 : ");
    scanf("%lf", &x1);
    printf("y1 : ");
    scanf("%lf", &y1);
    printf("x2 : ");
    scanf("%lf", &x2);
    printf("y2 : ");
    scanf("%lf", &y2);

    printf("Area of the Circle is : %0.4lf\n", area(x1, y1, x2, y2, ptr));

    system("PAUSE");
    return 0;
}