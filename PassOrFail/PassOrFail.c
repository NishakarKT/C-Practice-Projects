#include<stdio.h>
#include<stdlib.h>

int main()
{
    float M1, M2, M3, M4, M5, P, Q;

    printf("WELCOME TO PASS OR FAIL!!!\nHere You Can Know Where You Stand In The Exam.\nEnter Your Marks(In 5 Subjects) And Your Pass Percentage.\n");
    
    printf("Enter Your Marks In Subject 1 (Out Of 100) As 'M1'\n");
    scanf("%f", &M1);

    printf("Enter Your Marks In Subject 2 (Out Of 100) As 'M2'\n");
    scanf("%f", &M2);

    printf("Enter Your Marks In Subject 3 (Out Of 100) As 'M3'\n");
    scanf("%f", &M3);

    printf("Enter Your Marks In Subject 4 (Out Of 100) As 'M4'\n");
    scanf("%f", &M4);

    printf("Enter Your Marks In Subject 5 (Out Of 100) As 'M5'\n");
    scanf("%f", &M5);

    printf("Enter Your Pass Percentage As 'P'\n");
    scanf("%f", &P);

    printf("Your Expected Percentage Is %0.2f\n", Q=(M1+M2+M3+M4+M5)/5);
    printf("Your Pass Percentage Is %0.2f\n", P);

    if(Q>P)
    {
        printf("CONGRATS!!!\nPASSED!!!\n");
    }
    else
    {
        {
            printf("SORRY!!!\n\aYou Failed...\n\aBetter Luck Next Time...\n\a\a\a");
        }

        system("PAUSE");

        return 0 ;

    }
    
} 