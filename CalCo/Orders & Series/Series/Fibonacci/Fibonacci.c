#include<stdio.h>
#include<stdlib.h>

int fibonacci(int n)   //Recursion Method.
{
    if(n==1)
    {return 0;}
    if(n==2)
    {return 1;}
    if(n>2)
    {return (fibonacci(n-1) + fibonacci(n-2));}
}

int main()
{
    int i, n;
    
    printf("FIBONACCI SEQUENCE!!!\nHow many members of the Fibonacci Sequence sholuld be displayed\?\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
    printf("%d\n", fibonacci(i));
    if(i>n)
    {break;}
    }
    system("PAUSE");
    return 0 ;

}