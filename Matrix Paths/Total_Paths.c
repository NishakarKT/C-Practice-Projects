#include<stdio.h>

int paths(int m, int n)
{
    if(m==1 || n==1)
    {
        return 1;
    }
    else
    {
        return paths(m-1, n) + paths(m, n-1);
    }
}

int main()
{
    int m, n;

    printf("Enter m : ");
    scanf("%d", &m);
    printf("Enter n : ");
    scanf("%d", &n);

    printf("Total number of possible paths : %d\n", paths(m,n));

    return 0 ;
}