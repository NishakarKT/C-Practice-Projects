#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]) //*agrv[] implies a 2D array in which it points to the indexes (00, 10, 20 ,30 etc) and each has a string attached.
{
    double a, b;
    sscanf(argv[2], "%lf", &a); //to convert a char string to an integer datatype.
    sscanf(argv[3], "%lf", &b);

    if(strcmp(argv[1],"add")==0)
    {
        printf("Sum : %0.4lf\n", a+b);
    }
    else if(strcmp(argv[1],"subtract")==0)
    {
        printf("Differnce : %0.4lf\n", a-b);
    }
    else if(strcmp(argv[1],"=multiply")==0)
    {
        printf("Product : %0.4lf\n", a*b);
    }
    else if(strcmp(argv[1],"divide")==0)
    {
        printf("Division : %0.4lf\n", a/b);
    }

    system("PAUSE");
    return 0 ;
}