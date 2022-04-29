#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r;

    printf("WELCOME TO MATRIX ADJOINTER!!!\n");
    printf("Here You Can Obtain The Adjoint Of A Matrix In Seconds.\n");
    printf("Example Of A Square Matrix is:\na   b   c\nd   e   f\ng   h   i\n");
    printf("Enter The Values Of a, b, c, d, e, f, g, h, i Of The Matrix You Want The Adjoint Of.\n");
    
    printf("Enter a \n");
    scanf("%d", &a);

    printf("Enter b \n");
    scanf("%d", &b);

    printf("Enter c \n");
    scanf("%d", &c);

    printf("Enter d \n");
    scanf("%d", &d);

    printf("Enter e \n");
    scanf("%d", &e);

    printf("Enter f \n");
    scanf("%d", &f);

    printf("Enter g \n");
    scanf("%d", &g);

    printf("Enter h \n");
    scanf("%d", &h);

    printf("Enter i \n");
    scanf("%d", &i);

    printf("%d   ", (e*i-f*h));
    printf("%d   ", -(b*i-c*h));
    printf("%d\n", (b*f-c*e));
    printf("%d   ", -(d*i-f*g));
    printf("%d   ", (a*i-c*g));
    printf("%d\n", -(a*f-c*d));
    printf("%d   ", (d*h-e*g));
    printf("%d   ", -(a*h-b*g));
    printf("%d\n", (a*e-b*d));

    system("PAUSE");

    return 0 ;

}
    