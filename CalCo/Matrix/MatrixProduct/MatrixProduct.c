#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r;

    printf("WELCOME TO MATRIX PRODUCT!!!\n");
    printf("Example Of A Square Matrix is:\na   b   c\nd   e   f\ng   h   i\n");
    printf("Question:\na   b   c       j   k   l\nd   e   f   x   m   n   o\ng   h   i       p   q   r\n");
    
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

    printf("Enter j \n");
    scanf("%d", &j);

    printf("Enter k \n");
    scanf("%d", &k);

    printf("Enter l \n");
    scanf("%d", &l);

    printf("Enter m \n");
    scanf("%d", &m);

    printf("Enter n \n");
    scanf("%d", &n);

    printf("Enter o \n");
    scanf("%d", &o);

    printf("Enter p \n");
    scanf("%d", &p);

    printf("Enter q \n");
    scanf("%d", &q);

    printf("Enter r \n");
    scanf("%d", &r);

    printf("%d   ", a*j+b*m+c*p);
    printf("%d   ", a*k+b*n+c*q);
    printf("%d\n", a*l+b*o+c*r);
    printf("%d   ", d*j+e*m+f*p);
    printf("%d   ", d*k+e*n+f*q);
    printf("%d\n", d*l+e*o+f*r);
    printf("%d   ", g*j+h*m+i*p);
    printf("%d   ", g*k+h*n+i*q);
    printf("%d\n", g*l+h*o+i*r);

    system("PAUSE");

    return 0 ;

}
    
    