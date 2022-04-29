#include<stdio.h>
#include<stdlib.h>

int main()
{
    int p, q, r, s;

    printf("Dead Body in Admin.\nDiscussion 1 :\nRed : I was in Nav.\nLime : Red didn't do the emergency O2 task.\nCyan : I was with Lime all the time.\nWho is the Impostor \?\n1 = Red\n2 = Lime\n3 = Cyan\n");
    scanf("%d", &p);
    switch(p)
    {
        case 1:
            printf("Red was not the Impostor.\nDead Body in Electrical.\nDiscussion 2 :\nLime : I saw cyan vent!!!\nCyan : Lime vented in Security!!!\nWho is the Impostor \?\n1 = Lime\n2 = Cyan\n");
            scanf("%d", &q);
            switch(q)
            {
                case 1:
                    printf("Lime was not the Impostor.\nYou Lose.\n");
                break;

                case 2:
                    printf("Cyan was the Impostor.\nYou Win.\n");
                break;
            }
        break;

        case 2:
            printf("Lime was not the Impostor.\nDead Body in Electrical.\nDiscussion 2 :\nRed : Cyan killed Orange and vented!!!\nCyan : I was with Orange and Red killed Orange and vented!!!\nWho is the Impostor \?\n1 = Red\n2 = Cyan\n");
            scanf("%d", &r);
            switch(r)
            {
                case 1:
                    printf("Red was not the Impostor.\nYou Lose.\n");
                break;

                case 2:
                    printf("Cyan was the Impostor.\nYou Win.\n");
                break;
            }
        break;

        case 3:
            printf("Cyan was the Impostor.\nYou win.\n");
        break;
    }
system("PAUSE");
return 0;
}