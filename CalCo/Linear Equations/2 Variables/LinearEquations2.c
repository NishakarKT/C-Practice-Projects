#include<stdio.h>
#include<stdlib.h>

int main()
{
    float a, b, c, d, P, Q, D, E, F, X, Y;

    printf("LINEAR EQUATIONS (IN 2 VARIABLES SOLVER)\n");
    printf("Here You Can Obtain The Solutions Of Linear Equations (In 2 Variables) In Seconds.\n");
    printf("Example Of Linear Equations (In 2 Variables) is:\naX + bY = P\ncX + dY = Q\n");
    printf("Enter The Values Of 'a', 'b', 'c', 'd', 'P' and 'Q' Of The Equations You Want The Solutions Of.\n");
    
    printf("Enter a \n");
    scanf("%f", &a);

    printf("Enter b \n");
    scanf("%f", &b);

    printf("Enter P \n");
    scanf("%f", &P);

    printf("Enter c \n");
    scanf("%f", &c);

    printf("Enter d \n");
    scanf("%f", &d);
    
    printf("Enter Q \n");
    scanf("%f", &Q);

    D=(a*d-b*c);
    E=(P*d-Q*b);
    F=(a*Q-c*P);

    printf("X = %f\n", X=E/D);
    printf("Y = %f\n", Y=F/D);
    
    system("PAUSE");

    return 0 ;

}