#include<stdio.h>
#include<stdlib.h>

int main()

{
    float n;
    int i, m;

    printf("WELCOME TO MATHEMATICS TABLES!!!\nHere You Can Get The Mathematic Table Of Any Number And Of Any Number Of Members Of Your Choice!!!\n");
    printf("Enter The Number You Want The Multiplication Table Of...\n");
    scanf("%f", &n);
    printf("How Many Members In Your Table\?\n");
    scanf("%d", &m);

    for(i=1;i<(m+1);i++)
    {
        printf("%0.2f x %d = %0.2f\n", n, i, n*i);
    }
    system("PAUSE");
    return 0;
}