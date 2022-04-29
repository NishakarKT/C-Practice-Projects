#include<stdio.h>
#include<stdlib.h>

int main()
{
    int z, M, O;
    float a, A, b, c, d, E, F, G, H, I, L, r, s, m, N, P, Q, R, S, T, U, V, W, X, Y, Z, e, f, g, h, i, j, k, l, n, o, p, q, t, u, v, w, x, y;
    double D;

    printf("Welcome To CalCo!!!\n\aHere At CalCo You Get Access To Hundereds Of Mathematical Tools To Ease Out Your Daily Calculations!\n\a");
    
    for(z=0;;z++)
    {
    printf("Which Mathematical Tool Do You Want To Access\?\n0 = exit\n1 = AddEm\n2 = SubTra\n3 = ProdX\n4 = Divera\n5 = Percenter\n6 = Tables\n7 = Simpterest\n8 = Arithematic Progressions\n9 = Infinite Geometric Progression Sum\n10 = NumDia\n11 = Converters\n12 = Linear Equations\n");
    scanf("%d", &M);
    for(z=0;;z++)
    {
        switch(M)
    {
        case 0:
            printf("Thanks For Using CalCo!!!\n");
            system("PAUSE");
            exit(0);
        break;

        case 1:
            printf("Enter a\n");
            scanf("%f", &a);
            printf("Enter b\n");
            scanf("%f", &b);
            printf("%0.2f + %0.2f = %0.2f\n", a, b, c=a+b);
        break;

        case 2:
            printf("Enter a\n");
            scanf("%f", &a);
            printf("Enter b\n");
            scanf("%f", &b);
            printf("%0.2f - %0.2f = %0.2f\n", a, b, c=a-b);
        break;

        case 3:
            printf("Enter a\n");
            scanf("%f", &a);
            printf("Enter b\n");
            scanf("%f", &b);
            printf("%0.2f x %0.2f = %0.2f\n", a, b, c=a*b);
        break;

        case 4:
            printf("Enter a\n");
            scanf("%f", &a);
            printf("Enter b\n");
            scanf("%f", &b);
            printf("%0.2f / %0.2f = %0.2f\n", a, b, c=a/b);
        break;

        case 5:
            printf("Enter a\n");
            scanf("%f", &a);
            printf("Enter b\n");
            scanf("%f", &b);
            printf("The Percentage = %0.2f\n", a*100/b);
        break;

        case 6:
            printf("Enter The Number You Want The Multiplication Table Of...\n");
            scanf("%f", &m);
            printf("How Many Members In Your Table\?\n");
            scanf("%d", &n);

            for(z=1;z<(n+1);z++)
            {
            printf("%0.2f x %d = %0.2f\n", m, i, m*i);
            }
        break;

        case 7:
            printf("Enter Principal Amount P\n");
            scanf("%f", &P);

            printf("Enter Annual Interest Rate R\n");
            scanf("%f", &R);

            printf("Enter Time in Years T\n");
            scanf("%f", &T);
    
            printf("The Interest Amount is %f\n", P*R*T/100);
            printf("The Total Amount is %f\n", P+P*R*T/100);
        break;

        case 8:
            printf("Enter The First Term Of The Arithematic Progression(AP) 'a'\n");
            scanf("%f", &a);

            printf("Enter The Common Difference Of The Arithematic Progression 'd'\n");
            scanf("%f", &d);

            printf("Which Term Position 'n' ?\n");
            scanf("%d", &n);

            printf("The nth Term Is %0.2f\n", a+(n-1)*d);
            printf("The Sum Of n Terms Is %0.2f\n", 0.5*n*(2*a+(n-1)*d));
        break;

        case 9:
            printf("Enter 'a'(First Term Of The  GP)\n");
            scanf("%f", &a);
    
            printf("Enter 'r'(Common Ratio Of The GP)(r<1)\n");
            scanf("%f", &r);

            printf("The Sum = %0.2f\n", s=a/(1-r));
        break;

        case 10:
            printf("Enter Number Of Sides N (N > 2)\n");
            scanf("%f", &N);

            printf("The Number Of Diagonals is %f\n", 0.5*(N*N-3*N));

            system("PAUSE");
        break;

        case 11:
            printf("Which Converter Do You Want To Use\?\n1 = Angles\n2 = Area\n3 = Digital Storage\n4 = Energy\n5 = Length\n6 = Mass\n7 = Speed\n8 = Temperature\n9 = Time\n");
            scanf("%d", &O);

            for(z=0;;z++)
            {switch(O)
            {
            case 1:
            printf("Enter Plane Angle 'P'(In Degrees) \n");
            scanf("%f", &P);

            printf("The Converted Plane Angle In Gradians = %f\n", P*1.11111);
            printf("The Converted Plane Angle In MiliRadians = %f\n", P*17.4533);
            printf("The Converted Plane Angle In Radians = %f\n", P*0.0174533);
            printf("The Converted Plane Angle In Minutes Of Arc = %f\n", P*60);
            printf("The Converted Plane Angle In Seconds Of Arc = %f\n", P*3600);
            break;

            case 2:
            printf("Enter Area (In Sq Metres) 'A'\n");
            scanf("%f", &A);

            printf("Area In Sq Centimetres is %f\n", A*10000);
            printf("Area In Sq Milimetres is %f\n", A*1000000);
            printf("Area In Sq Kilometres is %f\n", A*0.000001);
            printf("Area In Sq Miles is %f\n", A*3.861*0.0000001);
            printf("Area In Sq Yards is %f\n", A*1.19599);
            printf("Area In Sq feet is %f\n", A*10.7639);
            printf("Area In Sq Inches is %f\n", A*1550);
            printf("Area In Acre is %f\n", A*0.000247105);
            printf("Area In Hectare is %f\n", A*0.0001);
            break;

            case 3:
            printf("Enter Digital Storage Value (In MegaBytes) 'D'\n");
            scanf("%lf", &D);

            printf("In Bits = %0.12lf\n", D*8000000);
            printf("In Bytes = %0.12lf\n", D*1000000);
            printf("In KibiBits = %0.12lf\n", D*7812.5);
            printf("In KibiBytes = %0.12lf\n", D*976.563);
            printf("In KiloBits = %0.12lf\n", D*8000);
            printf("In KiloBytes = %0.12lf\n", D*1000);
            printf("In MebiBits = %0.12lf\n", D*7.62939);
            printf("In MebiBytes = %0.12lf\n", D*0.953674);
            printf("In MegaBits = %0.12lf\n", D*8);
            printf("In GibiBits = %0.12lf\n", D*0.00745058);
            printf("In GibiBytes = %0.12lf\n", D*0.000931323);
            printf("In GigaBits = %0.12lf\n", D*0.008);
            printf("In GigaBytes = %0.12lf\n", D*0.001);
            printf("In TebiBits = %0.12lf\n", D*7.27*0.000001);
            printf("In TebiBytes = %0.12lf\n", D*9.0949*0.0000001);
            printf("In TeraBits = %0.12lf\n", D*8*0.000001);
            printf("In TeraBytes = %0.12lf\n", D*0.000001);
            printf("In PebiBits = %0.12lf\n", D*7.1054*0.000000001);
            printf("In PebiBytes = %0.12lf\n", D*8.8818*0.0000000001);
            printf("In PetaBits = %0.12lf\n", D*8*0.000000001);
            printf("In PetaBytes = %0.12lf\n", D*0.000000001);
            break;

            case 4:
            printf("Enter Energy (In Joules) 'E'\n");
            scanf("%f", &E);

            printf("E In KiloJoules Equals %f\n", E*0.001);
            printf("E In Calories Equals %f\n", E*0.239006);
            printf("E In KiloCalories Equals %f\n", E*0.000239006);
            printf("E In WattHours Equals %f\n", E*0.00027778);
            printf("E In ElectronVolts Equals %f\n", E*6.242*1000000000000000000);
            printf("E In Foot-Pounds Equals %f\n", E*0.737562);
            break;

            case 5:
            printf("Enter Length (In Metres) 'L'\n");
            scanf("%f", &L);

            printf("L In CentiMetres Equals %f\n", L*100);
            printf("L In MiliMetres Equals %f\n", L*1000);
            printf("L In KiloMetres Equals %f\n", L*0.001);
            printf("L In Miles Equals %f\n", L*0.000621371);
            printf("L In Yards Equals %f\n", L*1.09361);
            printf("L In Feet Equals %f\n", L*3.28084);
            printf("L In Inches Equals %f\n", L*39.3701);
            printf("L In Nautical Miles Equals %f\n", L*0.000539957);
            break;

            case 6:
            printf("Enter Mass 'Z'(In Kilograms)\n");
            scanf("%f", &Z);

            printf("Mass in Grams equals %f\n", Z*1000);
            printf("Mass in Miligrams equals %f\n", Z*1000000);
            printf("Mass in Pounds equals %f\n", Z*2.20462);
            printf("Mass in Ounces equals %f\n", Z*35.274);
            printf("Mass in Tonne equals %f\n", Z*0.001);
            printf("Mass in Quintal equals %f\n", Z*0.01);
            printf("Mass in Stone equals %f\n", Z*6.35029);
            printf("Mass in Imperial Ton equals %f\n", Z*0.000984207);
            printf("Mass in US Ton equMass\n", Z*0.00110231);
            break;

            case 7:
            printf("Enter Speed 'S'(In Metres Per Second)\n");
            scanf("%f", &S);

            printf("Speed in Miles Per Hour %f\n", S*2.23694);
            printf("Speed in Feet Per Second %f\n", S*3.28084);
            printf("Speed in KiloMetre Per Hour %f\n", S*3.6);
            printf("Speed in Knots %f\n", S*1.94384);
            break;

            case 8:
            printf("WELCOME TO CONVERTEMP!!!\nFahrenheit Scale  BP = 212  MP = 32\nKelvin Scale      BP = 373  MP = 273\nReumer Scale      BP = 80   MP = 0\n");

            printf("Enter Upper Limit(BP) 'U'\n");
            scanf("%f", &U);

            printf("Enter Lower Limit(MP) 'L'\n");
            scanf("%f", &L);

            printf("Enter Temperature 'T'(In Celsius Scale)\n");
            scanf("%f", &T);

            printf("The Converted Temperature is %f\n", L+(U-L)*T/100);
            break;

            case 9:
            printf("Enter Time 'T'(In Days) \n");
            scanf("%f", &T);

            printf("The Converted Time In MiliSeconds = %f\n", T*8.64*10000000);
            printf("The Converted Time In Seconds = %f\n", T*86400);
            printf("The Converted Time In Minutes = %f\n", T*1440);
            printf("The Converted Time In Hours = %f\n", T*24);
            printf("The Converted Time In Weeks = %f\n", T*0.142857);
            printf("The Converted Time In Months = %f\n", T*0.0328767);
            printf("The Converted Time In Calendar Years = %f\n", T*0.00273973);
            printf("The Converted Time In Decades = %f\n", T*0.000273973);
            printf("The Converted Time In Centuries = %f\n", T*0.0000273973);
            break;
             }
            }
        break;

        case 12:
            printf("How Many Variables Are Present(<=5)\?\n");
            scanf("%d", &O);

switch(O)
{
    case 2:
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
    break;

    case 3:
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
    break;

    case 4:
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
    printf("Z = %f\n", Z=H/D);printf("LINEAR EQUATIONS (IN 4 VARIABLES SOLVER)\n");
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
    break;

    case 5:
        printf("Example Of Linear Equations (In 5 Variables) is:\naV + bW + cX +dY eZ = P\nfV + gW + hX + iY jZ =Q\nkV + lW + mX + nY + oZ =R\npV + qW + rX + sY + tZ =S\nuV + vW + wX + xY + yZ =T\n");
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
    break;
    }
        break;
    }
    }
    }
    return 0;
}
