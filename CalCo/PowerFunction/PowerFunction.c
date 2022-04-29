#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int i;
    double m,n;

    for(i=0;;i++)
    {
    printf("Enter the Base Number.\n");
    scanf("%lf", &m);
    printf("Enter the Index.\n");
    scanf("%lf", &n);

    printf("%0.4lf ^ %0.4lf = %0.4lf\n", m, n, pow(m,n));
    }

    system("PAUSE");
    return 0 ;
}