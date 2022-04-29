#include<stdio.h>
#include<stdlib.h>

int main()
{
    float a, r, s;

    printf("WELCOME TO INFSUMGP!!!\nHere You Can Calculate The Sum Of An Infinite GP(Geometric Progression) In A Fraction Of Second.\n");

    printf("Enter 'a'(First Term Of The  GP)\n");
    scanf("%f", &a);
    
    printf("Enter 'r'(Common Ratio Of The GP)(r<1)\n");
    scanf("%f", &r);

    printf("The Sum = %f\n", s=a/(1-r));

    system("PAUSE");

    return 0 ;

}