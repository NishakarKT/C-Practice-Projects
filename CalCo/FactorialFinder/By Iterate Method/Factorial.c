#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, n, p=1;

    printf("WELCOME To Factorial Finder!!!\n");
    printf("Enter The Number You Want The Factorial Of.\n");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {p=p*i;}    // Or p=p*i (without curly brackets).
    printf("%d! = %d\n", n, p); 
    
    //{printf("%d! = %d\n", n, p=p*i);} //This will loop the print function also.
                                                                                                          
    system("PAUSE");
    return 0 ;
}