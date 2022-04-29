#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count, i, j, k, l;
    char setpass[1000], getpass[100], check[100];

    //Available Characters...
    check[0] = 'a';     check[10] = 'k';     check[20] = 'u';     check[30] = 'E';     check[40] = 'O';     check[50] = 'Y';     check[60] = '7';     check[70] = '&';     check[80] = '<';     check[90] = '}';  
    check[1] = 'b';     check[11] = 'l';     check[21] = 'v';     check[31] = 'F';     check[41] = 'P';     check[51] = 'Z';     check[61] = '8';     check[71] = '(';     check[81] = ',';     check[91] = '[';
    check[2] = 'c';     check[12] = 'm';     check[22] = 'w';     check[32] = 'G';     check[42] = 'Q';     check[52] = ' ';     check[62] = '9';     check[72] = ')';     check[82] = '>';     check[92] = ']';
    check[3] = 'd';     check[13] = 'n';     check[23] = 'x';     check[33] = 'H';     check[43] = 'R';     check[53] = '0';     check[63] = '0';     check[73] = '*';     check[83] = '.';     check[93] = '=';
    check[4] = 'e';     check[14] = 'o';     check[24] = 'y';     check[34] = 'I';     check[44] = 'S';     check[54] = '1';     check[64] = '!';     check[74] = '_';     check[84] = '?';     check[94] = '`';
    check[5] = 'f';     check[15] = 'p';     check[25] = 'z';     check[35] = 'J';     check[45] = 'T';     check[55] = '2';     check[65] = '@';     check[75] = '+';     check[85] = ';';
    check[6] = 'g';     check[16] = 'q';     check[26] = 'A';     check[36] = 'K';     check[46] = 'U';     check[56] = '3';     check[66] = '#';     check[76] = '-';     check[86] = ':';
    check[7] = 'h';     check[17] = 'r';     check[27] = 'B';     check[37] = 'L';     check[47] = 'V';     check[57] = '4';     check[67] = '$';     check[77] = '~';     check[87] = '\"';
    check[8] = 'i';     check[18] = 's';     check[28] = 'C';     check[38] = 'M';     check[48] = 'W';     check[58] = '5';     check[68] = '%';     check[78] = '/';     check[88] = '\'';
    check[9] = 'j';     check[19] = 't';     check[29] = 'D';     check[39] = 'N';     check[49] = 'X';     check[59] = '6';     check[69] = '^';     check[79] = '\\';    check[89] = '{';
    

    printf("HACKBOT : Hello!\nHACKBOT : I'm HackBot! and I can crack any Password.\nHACKBOT : Don't doubt my speed! HAHA!!!\n");

start:

    printf("\nSet a Password : ");
    scanf(" %[^\n]%*c", &setpass);

    count = (-1);
    for (i = 0;; i++)
    {
        count++;
        if (setpass[i] == '\0')
        {
            break;
        }
    }

label:

    printf("\nHACKBOT : Choose a Decoding Option,\n\n1 = Show the Scan Details (SLOWER)\n2 = Don't show the Scan Details (FASTER)\n");
    scanf("%d", &k);

    switch (k)
    {

    case 1:

        printf("\nHACK BOT : Let's begin!!!\n\n");
        system("PAUSE");

        for (i = 0; i < count; i++)
        {
            for (j = 0; j <= 94; j++)
            {
                if (setpass[i] == check[j])
                {
                    printf("\n\n\n%c : MATCHED!!!\n\n\n", check[j]);
                    getpass[i]=check[j];
                    break;
                }
                else
                {
                    printf("%c : Error... \n", check[j]);
                }
            }
        }

        printf("\nHACKBOT The Password is <<<  ");

        for (i = 0; i < count; i++)
        {
            printf("%c", getpass[i]);
        }
        printf("  >>>");

        printf("\nHACKBOT : Once again I'm Right!\nHACKBOT : What's Next \?\n");

    label1:

        printf("\n1 = Reset Password\n2 = Exit\n");
        scanf("%d", &l);

        switch (l)
        {

        case 1:
        {
            goto start;
        }
        break;

        case 2:
        {
            printf("\nHACKBOT : See you soon...\n");
            system("PAUSE");
            exit(0);
        }
        break;

        default:
        {
            printf("\nHACKBOT : Invalid Input...\n");
            goto label1;
        }
        break;
        }

        break;

    case 2:

        printf("\nHACK BOT : Let's begin!!!\n");
        system("PAUSE");

        for (i = 0; i < count; i++)
        {
            for (j = 0; j <= 94; j++)
            {
                if (setpass[i] == check[j])
                {
                    getpass[i]=check[j];
                    break;
                }
            }
        }

        printf("\nHACKBOT : The Password is <<<  ");

        for (i = 0; i < count; i++)
        {
            printf("%c", getpass[i]);
        }
        printf("  >>>");

        printf("\nHACKBOT : Once again I'm Right!\nHACKBOT : What's Next \?\n");

    label2:

        printf("\n1 = Reset Password\n2 = Exit\n");
        scanf("%d", &l);

        switch (l)
        {

        case 1:
        {
            goto start;
        }
        break;

        case 2:
        {
            printf("\nHACKBOT : See you soon...\n");
            system("PAUSE");
            exit(0);
        }
        break;

        default:
        {
            printf("\nHACKBOT : Invalid Input...\n");
            goto label2;
        }
        break;
        }

        break;

    default:

    {
        printf("\nHACKBOT : Invalid Input...\n");
        goto label;
    }

    break;
    }

    return 0;
}