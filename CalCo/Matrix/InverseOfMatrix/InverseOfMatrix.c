#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, D;

    printf("WELCOME TO INVERSEOFMATRIX!!!\n");
    printf("Here You Can Obtain The Inverse Of A Matrix In Seconds.\n");
    printf("Example Of A Square Matrix is:\na   b   c\nd   e   f\ng   h   i\n");
    printf("Enter The Values Of a, b, c, d, e, f, g, h, i Of The Matrix You Want The Inverse Of.\n");
    
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

    D=a*(e*i-f*h)-b*(d*i-f*g)+c*(d*h-e*g);

    printf("%d   ", (e*i-f*h)/D);
    printf("%d   ", -(b*i-c*h)/D);
    printf("%d\n", (b*f-c*e)/D);
    printf("%d   ", -(d*i-f*g)/D);
    printf("%d   ", (a*i-c*g)/D);
    printf("%d\n", -(a*f-c*d)/D);
    printf("%d   ", (d*h-e*g)/D);
    printf("%d   ", -(a*h-b*g)/D);
    printf("%d\n", (a*e-b*d)/D);

    system("PAUSE");

    return 0 ;

}
    