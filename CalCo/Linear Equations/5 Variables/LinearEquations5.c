#include<stdio.h>
#include<stdlib.h>

int main()
{
    float a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, P, Q, R, S, T, D, E, F, G, H, I, V, W, X, Y, Z;

    printf("LINEAR EQUATIONS (IN 5 VARIABLES SOLVER)\n");
    printf("Here You Can Obtain The Solutions Of Linear Equations (In 5 Variables) Within Seconds.\n");
    printf("Example Of Linear Equations (In 5 Variables) is:\naV + bW + cX +dY eZ = P\nfV + gW + hX + iY jZ =Q\nkV + lW + mX + nY + oZ =R\npV + qW + rX + sY + tZ =S\nuV + vW + wX + xY + yZ =T");
    printf("Enter The Values Of 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'P', 'Q', 'R', 'S', 'T' Of The Equations You Want The Solutions Of.\n");
    
    printf("Enter a \n");
    scanf("%f", &a);

    printf("Enter b \n");
    scanf("%f", &b);

    printf("Enter c \n");
    scanf("%f", &c);

    printf("Enter d \n");
    scanf("%f", &d);

    printf("Enter e \n");
    scanf("%f", &e);

    printf("Enter P \n");
    scanf("%f", &P);

    printf("Enter f \n");
    scanf("%f", &f);

    printf("Enter g \n");
    scanf("%f", &g);

    printf("Enter h \n");
    scanf("%f", &h);

    printf("Enter i \n");
    scanf("%f", &i);

    printf("Enter j \n");
    scanf("%f", &j);

    printf("Enter Q \n");
    scanf("%f", &Q);

    printf("Enter k \n");
    scanf("%f", &k);

    printf("Enter l \n");
    scanf("%f", &l);

    printf("Enter m \n");
    scanf("%f", &m);

    printf("Enter n \n");
    scanf("%f", &n);

    printf("Enter o \n");
    scanf("%f", &o);

    printf("Enter R \n");
    scanf("%f", &R);

    printf("Enter p \n");
    scanf("%f", &p);

    printf("Enter q \n");
    scanf("%f", &q);

    printf("Enter r \n");
    scanf("%f", &r);

    printf("Enter s \n");
    scanf("%f", &s);

    printf("Enter t \n");
    scanf("%f", &t);

    printf("Enter S \n");
    scanf("%f", &S);

    printf("Enter u \n");
    scanf("%f", &u);

    printf("Enter v \n");
    scanf("%f", &v);

    printf("Enter w \n");
    scanf("%f", &w);

    printf("Enter x \n");
    scanf("%f", &x);

    printf("Enter y \n");
    scanf("%f", &y);

    printf("Enter T \n");
    scanf("%f", &T);

    D=a*(g*(m*(s*y-x*t)-n*(r*y-w*t)+o*(r*x-s*w))-h*(l*(s*y-x*t)-n*(q*y-v*t)+o*(q*x-v*s))+i*(l*(r*y-w*t)-m*(q*y-v*t)+o*(q*w-v*r))-j*(l*(r*x-w*s)-m*(q*x-v*s)+n*(q*w-v*r)))
    -b*(f*(m*(s*y-x*t)-n*(r*y-w*t)+o*(r*x-w*s))-h*(k*(s*y-x*t)-n*(p*y-u*t)+o*(p*x-u*s))+i*(k*(r*y-w*t)-m*(p*y-u*t)+o*(p*w-u*r))-j*(k*(r*x-w*s)-m*(p*x-u*s)+n*(p*w-u*r)))
    +c*(f*(l*(s*y-x*t)-n*(q*y-v*t)+o*(q*x-v*s))-g*(k*(s*y-x*t)-n*(p*y-u*t)+o*(p*x-u*s))+i*(k*(q*y-v*t)-l*(p*y-u*t)+o*(p*v-u*q))-j*(k*(q*x-v*s)-l*(p*x-u*s)+n*(p*v-u*q)))
    -d*(f*(l*(r*y-w*t)-m*(q*y-v*t)+o*(q*w-v*r))-g*(k*(r*y-w*t)-m*(p*y-u*t)+o*(p*w-u*r))+h*(k*(q*y-v*t)-l*(p*y-u*t)+o*(p*v-u*q))-j*(k*(q*w-v*r)-l*(p*w-u*r)+m*(p*v-u*q)))
    +e*(f*(l*(r*x-w*s)-m*(q*x-v*s)+n*(q*w-v*r))-g*(k*(r*x-w*s)-m*(p*x-u*s)+n*(p*w-u*r))+h*(k*(q*x-v*s)-l*(p*x-u*s)+n*(p*v-u*q))-i*(k*(q*w-v*r)-l*(p*w-u*r)+m*(p*v-u*q)));
    
    E=P*(g*(m*(s*y-x*t)-n*(r*y-w*t)+o*(r*x-s*w))-h*(l*(s*y-x*t)-n*(q*y-v*t)+o*(q*x-v*s))+i*(l*(r*y-w*t)-m*(q*y-v*t)+o*(q*w-v*r))-j*(l*(r*x-w*s)-m*(q*x-v*s)+n*(q*w-v*r)))
    -b*(Q*(m*(s*y-x*t)-n*(r*y-w*t)+o*(r*x-w*s))-h*(R*(s*y-x*t)-n*(S*y-T*t)+o*(S*x-T*s))+i*(R*(r*y-w*t)-m*(S*y-T*t)+o*(S*w-T*r))-j*(R*(r*x-w*s)-m*(S*x-T*s)+n*(S*w-T*r)))
    +c*(Q*(l*(s*y-x*t)-n*(q*y-v*t)+o*(q*x-v*s))-g*(R*(s*y-x*t)-n*(S*y-T*t)+o*(S*x-T*s))+i*(R*(q*y-v*t)-l*(S*y-T*t)+o*(S*v-T*q))-j*(R*(q*x-v*s)-l*(S*x-T*s)+n*(S*v-T*q)))
    -d*(Q*(l*(r*y-w*t)-m*(q*y-v*t)+o*(q*w-v*r))-g*(R*(r*y-w*t)-m*(S*y-T*t)+o*(S*w-T*r))+h*(R*(q*y-v*t)-l*(S*y-T*t)+o*(S*v-T*q))-j*(R*(q*w-v*r)-l*(S*w-T*r)+m*(S*v-T*q)))
    +e*(Q*(l*(r*x-w*s)-m*(q*x-v*s)+n*(q*w-v*r))-g*(R*(r*x-w*s)-m*(S*x-T*s)+n*(S*w-T*r))+h*(R*(q*x-v*s)-l*(S*x-T*s)+n*(S*v-T*q))-i*(R*(q*w-v*r)-l*(S*w-T*r)+m*(S*v-T*q)));

    F=a*(Q*(m*(s*y-x*t)-n*(r*y-w*t)+o*(r*x-s*w))-h*(R*(s*y-x*t)-n*(S*y-T*t)+o*(S*x-T*s))+i*(R*(r*y-w*t)-m*(S*y-T*t)+o*(S*w-T*r))-j*(R*(r*x-w*s)-m*(S*x-T*s)+n*(S*w-T*r)))
    -P*(f*(m*(s*y-x*t)-n*(r*y-w*t)+o*(r*x-w*s))-h*(k*(s*y-x*t)-n*(p*y-u*t)+o*(p*x-u*s))+i*(k*(r*y-w*t)-m*(p*y-u*t)+o*(p*w-u*r))-j*(k*(r*x-w*s)-m*(p*x-u*s)+n*(p*w-u*r)))
    +c*(f*(R*(s*y-x*t)-n*(S*y-T*t)+o*(S*x-T*s))-Q*(k*(s*y-x*t)-n*(p*y-u*t)+o*(p*x-u*s))+i*(k*(S*y-T*t)-R*(p*y-u*t)+o*(p*T-u*S))-j*(k*(S*x-T*s)-R*(p*x-u*s)+n*(p*T-u*S)))
    -d*(f*(R*(r*y-w*t)-m*(S*y-T*t)+o*(S*w-T*r))-Q*(k*(r*y-w*t)-m*(p*y-u*t)+o*(p*w-u*r))+h*(k*(S*y-T*t)-R*(p*y-u*t)+o*(p*T-u*S))-j*(k*(S*w-T*r)-R*(p*w-u*r)+m*(p*T-u*S)))
    +e*(f*(R*(r*x-w*s)-m*(S*x-T*s)+n*(S*w-T*r))-Q*(k*(r*x-w*s)-m*(p*x-u*s)+n*(p*w-u*r))+h*(k*(S*x-T*s)-R*(p*x-u*s)+n*(p*T-u*S))-i*(k*(S*w-T*r)-R*(p*w-u*r)+m*(p*T-u*S)));

    G=a*(g*(R*(s*y-x*t)-n*(S*y-T*t)+o*(S*x-s*T))-Q*(l*(s*y-x*t)-n*(q*y-v*t)+o*(q*x-v*s))+i*(l*(S*y-T*t)-R*(q*y-v*t)+o*(q*T-v*S))-j*(l*(S*x-T*s)-R*(q*x-v*s)+n*(q*T-v*S)))
    -b*(f*(R*(s*y-x*t)-n*(S*y-T*t)+o*(S*x-T*s))-Q*(k*(s*y-x*t)-n*(p*y-u*t)+o*(p*x-u*s))+i*(k*(S*y-T*t)-R*(p*y-u*t)+o*(p*T-u*S))-j*(k*(S*x-T*s)-R*(p*x-u*s)+n*(p*T-u*S)))
    +P*(f*(l*(s*y-x*t)-n*(q*y-v*t)+o*(q*x-v*s))-g*(k*(s*y-x*t)-n*(p*y-u*t)+o*(p*x-u*s))+i*(k*(q*y-v*t)-l*(p*y-u*t)+o*(p*v-u*q))-j*(k*(q*x-v*s)-l*(p*x-u*s)+n*(p*v-u*q)))
    -d*(f*(l*(S*y-T*t)-R*(q*y-v*t)+o*(q*T-v*S))-g*(k*(S*y-T*t)-R*(p*y-u*t)+o*(p*T-u*S))+Q*(k*(q*y-v*t)-l*(p*y-u*t)+o*(p*v-u*q))-j*(k*(q*T-v*S)-l*(p*T-u*S)+R*(p*v-u*q)))
    +e*(f*(l*(S*x-T*s)-R*(q*x-v*s)+n*(q*T-v*S))-g*(k*(S*x-T*s)-R*(p*x-u*s)+n*(p*T-u*S))+Q*(k*(q*x-v*s)-l*(p*x-u*s)+n*(p*v-u*q))-i*(k*(q*T-v*S)-l*(p*T-u*S)+R*(p*v-u*q)));

    H=a*(g*(m*(S*y-T*t)-R*(r*y-w*t)+o*(r*T-S*w))-h*(l*(S*y-T*t)-R*(q*y-v*t)+o*(q*T-v*S))+Q*(l*(r*y-w*t)-m*(q*y-v*t)+o*(q*w-v*r))-j*(l*(r*T-w*S)-m*(q*T-v*S)+R*(q*w-v*r)))
    -b*(f*(m*(S*y-T*t)-R*(r*y-w*t)+o*(r*T-w*S))-h*(k*(S*y-T*t)-R*(p*y-u*t)+o*(p*T-u*S))+Q*(k*(r*y-w*t)-m*(p*y-u*t)+o*(p*w-u*r))-j*(k*(r*T-w*S)-m*(p*T-u*S)+R*(p*w-u*r)))
    +c*(f*(l*(S*y-T*t)-R*(q*y-v*t)+o*(q*T-v*S))-g*(k*(S*y-T*t)-R*(p*y-u*t)+o*(p*T-u*S))+Q*(k*(q*y-v*t)-l*(p*y-u*t)+o*(p*v-u*q))-j*(k*(q*T-v*S)-l*(p*T-u*S)+R*(p*v-u*q)))
    -P*(f*(l*(r*y-w*t)-m*(q*y-v*t)+o*(q*w-v*r))-g*(k*(r*y-w*t)-m*(p*y-u*t)+o*(p*w-u*r))+h*(k*(q*y-v*t)-l*(p*y-u*t)+o*(p*v-u*q))-j*(k*(q*w-v*r)-l*(p*w-u*r)+m*(p*v-u*q)))
    +e*(f*(l*(r*T-w*S)-m*(q*T-v*S)+R*(q*w-v*r))-g*(k*(r*T-w*S)-m*(p*T-u*S)+R*(p*w-u*r))+h*(k*(q*T-v*S)-l*(p*T-u*S)+R*(p*v-u*q))-i*(k*(q*w-v*r)-l*(p*w-u*r)+m*(p*v-u*q)));

    I=a*(g*(m*(s*T-x*S)-n*(r*T-w*S)+R*(r*x-s*w))-h*(l*(s*T-x*S)-n*(q*T-v*S)+R*(q*x-v*s))+i*(l*(r*T-w*S)-m*(q*T-v*S)+R*(q*w-v*r))-Q*(l*(r*x-w*s)-m*(q*x-v*s)+n*(q*w-v*r)))
    -b*(f*(m*(s*T-x*S)-n*(r*T-w*S)+R*(r*x-w*s))-h*(k*(s*T-x*S)-n*(p*T-u*S)+R*(p*x-u*s))+i*(k*(r*T-w*S)-m*(p*T-u*S)+R*(p*w-u*r))-Q*(k*(r*x-w*s)-m*(p*x-u*s)+n*(p*w-u*r)))
    +c*(f*(l*(s*T-x*S)-n*(q*T-v*S)+R*(q*x-v*s))-g*(k*(s*T-x*S)-n*(p*T-u*S)+R*(p*x-u*s))+i*(k*(q*T-v*S)-l*(p*T-u*S)+R*(p*v-u*q))-Q*(k*(q*x-v*s)-l*(p*x-u*s)+n*(p*v-u*q)))
    -d*(f*(l*(r*T-w*S)-m*(q*T-v*S)+R*(q*w-v*r))-g*(k*(r*T-w*S)-m*(p*T-u*S)+R*(p*w-u*r))+h*(k*(q*T-v*S)-l*(p*T-u*S)+R*(p*v-u*q))-Q*(k*(q*w-v*r)-l*(p*w-u*r)+m*(p*v-u*q)))
    +P*(f*(l*(r*x-w*s)-m*(q*x-v*s)+n*(q*w-v*r))-g*(k*(r*x-w*s)-m*(p*x-u*s)+n*(p*w-u*r))+h*(k*(q*x-v*s)-l*(p*x-u*s)+n*(p*v-u*q))-i*(k*(q*w-v*r)-l*(p*w-u*r)+m*(p*v-u*q)));

    printf("V = %f\n", V=E/D);
    printf("W = %f\n", W=F/D);
    printf("X = %f\n", X=G/D);
    printf("Y = %f\n", Y=H/D);
    printf("Z = %f\n", Z=I/D);

    system("PAUSE");

    return 0 ;

}
    