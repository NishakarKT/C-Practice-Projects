#include<stdio.h>
#include<stdlib.h>

int main()
{
    float a, b, c, d, e, f, g, h, i, P, Q, R, D, E, F, G, X, Y, Z;

    printf("LINEAR EQUATIONS (IN 3 VARIABLES SOLVER)\n");
    printf("Here You Can Obtain The Solutions Of Linear Equations (In 3 Variables) In Seconds.\n");
    printf("Example Of Linear Equations (In 3 Variables) is:\naX + bY + cZ = P\ndX + eY + fZ = Q\ngX + hY + iZ = R\n");
    printf("Enter The Values Of a, b, c, d, e, f, g, h, i, P, Q, R Of The Equations You Want The Solutions Of.\n");
    
    printf("Enter a \n");
    scanf("%f", &a);

    printf("Enter b \n");
    scanf("%f", &b);

    printf("Enter c \n");
    scanf("%f", &c);

    printf("Enter P \n");
    scanf("%f", &P);

    printf("Enter d \n");
    scanf("%f", &d);

    printf("Enter e \n");
    scanf("%f", &e);

    printf("Enter f \n");
    scanf("%f", &f);

    printf("Enter Q \n");
    scanf("%f", &Q);

    printf("Enter g \n");
    scanf("%f", &g);

    printf("Enter h \n");
    scanf("%f", &h);

    printf("Enter i \n");
    scanf("%f", &i);
    
    printf("Enter R \n");
    scanf("%f", &R);

    D=a*(e*i-f*h)-b*(d*i-f*g)+c*(d*h-g*e);
    E=P*(e*i-f*h)-Q*(b*i-c*h)+R*(b*f-c*e);
    F=-P*(d*i-f*g)+Q*(a*i-g*c)-R*(a*f-d*c);
    G=P*(d*h-e*g)-Q*(a*h-g*b)+R*(a*e-d*b);

    printf("X = %f\n", X=E/D);
    printf("Y = %f\n", Y=F/D);
    printf("Z = %f\n", Z=G/D);

    system("PAUSE");

    return 0 ;

}
    