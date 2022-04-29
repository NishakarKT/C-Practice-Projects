#include<stdio.h>
#include<stdlib.h>

int main()
{
    float a, d, n;

    printf("Enter The First Term Of The Arithematic Progression(AP) 'a'\n");
    scanf("%f", &a);

    printf("Enter The Common Difference Of The Arithematic Progression 'd'\n");
    scanf("%f", &d);

    printf("Which Term Position 'n' ?\n");
    scanf("%f", &n);

    printf("The nth Term Is %f\n", a+(n-1)*d);
    printf("The Sum Of n Terms Is %f\n", 0.5*n*(2*a+(n-1)*d));

    system("PAUSE");

    return 0;

}