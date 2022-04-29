#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a, b, c, d, e, f, g, h, i;

    printf("WELCOME TO DETERMINANT SOLVER!!!\n");
    printf("Example Of A Square Matrix is:\na   b   c\nd   e   f\ng   h   i\n");
    printf("Determinant Is A Scalar Value That Can Be Computed From The Elements Of A Square Matrix.\n");
    
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

    printf("The Value Of Determinant = %d\n", a*(e*i-f*h)-b*(d*i-f*g)+c*(d*h-e*g));

    system("PAUSE");

    return 0 ;

}
    
    