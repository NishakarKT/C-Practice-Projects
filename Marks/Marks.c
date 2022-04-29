#include<stdio.h>
#include<stdlib.h>

int main()   //1D Array
{
    int i, n, marks[n];

    printf("Enter the strength of the class.\n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
    printf("Enter marks of Roll No. %d\n", i);
    scanf("%d", &marks[i]);
    if(i>n)
    {break;}
    }
    for(i=1;i<=n;i++)
    {
    printf("Marks Of Roll No. %d = %d\n", i, marks[i]);
    if(i>n)
    {break;}
    }
    system("PAUSE");
    return 0 ;
}