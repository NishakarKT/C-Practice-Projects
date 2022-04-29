#include<stdio.h>
#include<stdlib.h>

int main()
{
    float a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, Q, R, S, T, D, E, F, G, H, W, X, Y, Z;

    printf("LINEAR EQUATIONS (IN 4 VARIABLES SOLVER)\n");
    printf("Here You Can Obtain The Solutions Of Linear Equations (In 4 Variables) In Seconds.\n");
    printf("Example Of Linear Equations (In 4 Variables) is:\naW + bX + cY +dZ = Q\neW + fX + gY + hZ = R\niW + jX + kY + lZ = S\nmW + nX + oY + pZ = T\n");
    printf("Enter The Values Of 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'Q', 'R', 'S', 'T' Of The Equations You Want The Solutions Of.\n");
    
    printf("Enter a \n");
    scanf("%f", &a);

    printf("Enter b \n");
    scanf("%f", &b);

    printf("Enter c \n");
    scanf("%f", &c);

    printf("Enter d \n");
    scanf("%f", &d);

    printf("Enter Q \n");
    scanf("%f", &Q);

    printf("Enter e \n");
    scanf("%f", &e);

    printf("Enter f \n");
    scanf("%f", &f);

    printf("Enter g \n");
    scanf("%f", &g);

    printf("Enter h \n");
    scanf("%f", &h);

    printf("Enter R \n");
    scanf("%f", &R);
    
    printf("Enter i \n");
    scanf("%f", &i);
    
    printf("Enter j \n");
    scanf("%f", &j);

    printf("Enter k \n");
    scanf("%f", &k);

    printf("Enter l \n");
    scanf("%f", &l);

    printf("Enter S \n");
    scanf("%f", &S);

    printf("Enter m \n");
    scanf("%f", &m);

    printf("Enter n \n");
    scanf("%f", &n);

    printf("Enter o \n");
    scanf("%f", &o);

    printf("Enter p \n");
    scanf("%f", &p);

    printf("Enter T \n");
    scanf("%f", &T);

    D=a*(f*(k*p-o*l)-g*(j*p-n*l)+h*(j*o-n*k))-b*(e*(k*p-o*l)-g*(i*p-m*l)+h*(i*o-m*k))+c*(e*(j*p-n*l)-f*(i*p-m*l)+h*(i*n-m*j))-d*(e*(j*o-n*k)-f*(i*o-m*k)+g*(i*n-m*j));
    E=Q*(f*(k*p-o*l)-g*(j*p-n*l)+h*(j*o-n*k))-b*(R*(k*p-o*l)-g*(S*p-T*l)+h*(S*o-T*k))+c*(R*(j*p-n*l)-f*(S*p-T*l)+h*(S*n-T*j))-d*(R*(j*o-n*k)-f*(S*o-T*k)+g*(S*n-T*j));
    F=a*(R*(k*p-o*l)-g*(S*p-T*l)+h*(S*o-T*k))-Q*(e*(k*p-o*l)-g*(i*p-m*l)+h*(i*o-m*k))+c*(e*(S*p-T*l)-R*(i*p-m*l)+h*(i*T-m*S))-d*(e*(S*o-T*k)-R*(i*o-m*k)+g*(i*T-m*S));
    G=a*(f*(S*p-T*l)-R*(j*p-n*l)+h*(j*T-n*S))-b*(e*(S*p-T*l)-R*(i*p-m*l)+h*(i*T-m*S))+Q*(e*(j*p-n*l)-f*(i*p-m*l)+h*(i*n-m*j))-d*(e*(j*T-n*S)-f*(i*T-m*S)+R*(i*n-m*j));
    H=a*(f*(k*T-o*S)-g*(j*T-n*S)+R*(j*o-n*k))-b*(e*(k*T-o*S)-g*(i*T-m*S)+R*(i*o-m*k))+c*(e*(j*T-n*S)-f*(i*T-m*S)+R*(i*n-m*j))-Q*(e*(j*o-n*k)-f*(i*o-m*k)+g*(i*n-m*j));

    printf("W = %f\n", W=E/D);
    printf("X = %f\n", X=F/D);
    printf("Y = %f\n", Y=G/D);
    printf("Z = %f\n", Z=H/D);

    system("PAUSE");

    return 0 ;

}
    