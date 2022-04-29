#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Age;

    printf("WELCOME TO VOTE ELEIGIBILITY TEST!!!\n\aCheck If You Are Eligible to Vote By Entering Your Age Below.\nIf Eligible - No Beep\nIf Not Eligible - Beep\n(Beep Is Similar To The Sound You Heard Before\n)");

    printf("\nEnter Your Age\n");
    scanf("%d", &Age);

    printf("You Entered %d As Your Age\n", Age);

    if (Age>=18)
    {
        printf("CONGRATS!!! You Are Eligible To Vote!\n");
    }
    
    else
    {
        printf("SORRY!!! You Are Not Eligible To Vote!\n\a\a\a\a\a");
    }

    printf("In India The Voting Age Is 18.\nYou Should Be Atleast 18 In Order To Vote\n");

    system("PAUSE");

    return 0 ;

}