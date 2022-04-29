#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, n;
    double a, b;

    printf("Enter the first term of HP.\n");
    scanf("%lf", &a);
    printf("Enter the Reciprocated common difference of the HP.\n");
    scanf("%lf", &b);
    printf("How many members should be there in the HP.\n");
    scanf("%d", &n);
    
    for(i=1;i<=n;i++)
    {
        printf("%0.2f\n", 1/((1/a) + (i-1)*b));
        if(i>n)
        {
            break;
        }
    }
    system ("PAUSE");
    return 0 ;

}