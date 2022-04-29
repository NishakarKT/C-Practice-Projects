#include<stdio.h>
#include<stdlib.h>

int main()
{   
    int i, n;
    float a, d, N;

    printf("Enter The First Term Of The Arithematic Progression(AP).\n");
    scanf("%f", &a);
    printf("Enter The Common Difference Of The Arithematic Progression(AP).\n");
    scanf("%f", &d);
    printf("How Many Members Should There Be In The Series\?\n");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        N=(a + (i-1)*d);
        printf("%0.4f\n", N);
        if(i>n)
        {
            break;
        }
    }
    system("PAUSE");
    return 0 ;
    
}