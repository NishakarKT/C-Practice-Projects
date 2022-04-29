#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    char check[95], setpass[15], getpass[15];
    int z[100], track, lim, lim1;
    int a, i, j, k, l, n, c;
    double total1_t, total2_t;
    //Available Characters...
    check[0] = ' ';    check[10] = '8';     check[20] = 'n';     check[30] = 'd';     check[40] = 'f';     check[50] = 'b';     check[60] = 'x';     check[70] = '@';     check[80] = '<';     check[90] = '$';  
    check[1] = '_';     check[11] = '9';     check[21] = 'N';     check[31] = 'D';     check[41] = 'F';     check[51] = 'B';     check[61] = 'X';     check[71] = '+';     check[81] = '>';     check[91] = '%';
    check[2] = '0';     check[12] = 'e';     check[22] = 'o';     check[32] = 'l';     check[42] = 'w';     check[52] = 'v';     check[62] = 'z';     check[72] = '-';     check[82] = ',';     check[92] = '^';
    check[3] = '1';     check[13] = 'E';     check[23] = 'O';     check[33] = 'L';     check[43] = 'W';     check[53] = 'V';     check[63] = 'Z';     check[73] = '*';     check[83] = '.';     check[93] = '`';
    check[4] = '2';     check[14] = 't';     check[24] = 's';     check[34] = 'u';     check[44] = 'y';     check[54] = 'k';     check[64] = '(';     check[74] = '/';     check[84] = '~';     
    check[5] = '3';     check[15] = 'T';     check[25] = 'S';     check[35] = 'U';     check[45] = 'Y';     check[55] = 'K';     check[65] = ')';     check[75] = '=';     check[85] = ';';
    check[6] = '4';     check[16] = 'a';     check[26] = 'h';     check[36] = 'c';     check[46] = 'g';     check[56] = 'q';     check[66] = '{';     check[76] = '!';     check[86] = '\\';
    check[7] = '5';     check[17] = 'A';     check[27] = 'H';     check[37] = 'C';     check[47] = 'G';     check[57] = 'Q';     check[67] = '}';     check[77] = '?';     check[87] = '\"';
    check[8] = '6';     check[18] = 'i';     check[28] = 'r';     check[38] = 'm';     check[48] = 'p';     check[58] = 'j';     check[68] = '[';     check[78] = '&';     check[88] = '\'';
    check[9] = '7';     check[19] = 'I';     check[29] = 'R';     check[39] = 'M';     check[49] = 'P';     check[59] = 'J';     check[69] = ']';     check[79] = ':';    check[89] = '#';

    printf("HACKBOT : Hello!\nHACKBOT : I'm HackBot! and I can crack any Password.\nHACKBOT : Don't doubt my speed! HAHA!!!\n");
start:
    clock_t start1_t, start2_t, end1_t, end2_t;

    printf("\nSet a Password : ");
    scanf(" %[^\n]%*c", &setpass);
    printf("\nHACKBOT : Want faster decoding \?\nChoose an Option by entering the Number.\n1 = Numbers >>> Speed : (9/10)\n2 = Alphabets >>> Speed : (8/10)\n3 = Alphabets & Numbers mix >>> Speed (6/10)\n4 = All Characters Mix >>> Speed : (4/10)\n");
    scanf("%d", &c);
    switch(c)
    {
        case 1:
            lim=12;
            lim1=0;
        break;

        case 2:
            lim=64;
            lim1=12;
        break;

        case 3:
            lim=64;
            lim1=0;
        break;

        case 4:
            lim=94;
            lim1=0;
        break;
    }
    n = strlen(setpass);

label:
    printf("\nHACKBOT : Choose a Decoding Option,\n\n1 = Show the Scan Details (SLOWER)\n2 = Don't show the Scan Details (FASTER)\n");
    scanf("%d", &k);

    switch (k)
    {

    case 1:

        printf("\nHACK BOT : Let's begin!!!\n\n");
        system("PAUSE");
        start1_t = clock();
        switch (n)
        {
        case 1:
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                track = 0;
                for (i = 0; i < n; i++)
                {
                    if (getpass[i] == setpass[i])
                    {
                        track++;
                    }
                }
                if (track == n)
                {
                    printf("\n\n%s : MATCHED !!!\n\n", getpass);
                    goto end;
                }
                printf("%s : ERROR ...\n", getpass);
            }
            break;

        case 2:
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];

                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    track = 0;
                    for (i = 0; i < n; i++)
                    {
                        if (getpass[i] == setpass[i])
                        {
                            track++;
                        }
                    }
                    if (track == n)
                    {
                        printf("\n\n%s : MATCHED !!!\n\n", getpass);
                        goto end;
                    }
                    printf("%s : ERROR ...\n", getpass);
                }
            }
            break;

        case 3:
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        track = 0;
                        for (i = 0; i < n; i++)
                        {
                            if (getpass[i] == setpass[i])
                            {
                                track++;
                            }
                        }
                        if (track == n)
                        {
                            printf("\n\n%s : MATCHED !!!\n\n", getpass);
                            goto end;
                        }
                        printf("%s : ERROR ...\n", getpass);
                    }
                }
            }
            break;

        case 4:
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        for (z[3] = lim1; z[3] < lim; z[3]++)
                        {
                            getpass[3] = check[z[3]];
                            track = 0;
                            for (i = 0; i < n; i++)
                            {
                                if (getpass[i] == setpass[i])
                                {
                                    track++;
                                }
                            }
                            if (track == n)
                            {
                                printf("\n\n%s : MATCHED !!!\n\n", getpass);
                                goto end;
                            }
                            printf("%s : ERROR ...\n", getpass);
                        }
                    }
                }
            }
            break;

        case 5:
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        for (z[3] = lim1; z[3] < lim; z[3]++)
                        {
                            getpass[3] = check[z[3]];
                            for (z[4] = lim1; z[4] < lim; z[4]++)
                            {
                                getpass[4] = check[z[4]];
                                track = 0;
                                for (i = 0; i < n; i++)
                                {
                                    if (getpass[i] == setpass[i])
                                    {
                                        track++;
                                    }
                                }
                                if (track == n)
                                {
                                    printf("\n\n%s : MATCHED !!!\n\n", getpass);
                                    goto end;
                                }
                                printf("%s : ERROR ...\n", getpass);
                            }
                        }
                    }
                }
            }
            break;

        case 6:
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        for (z[3] = lim1; z[3] < lim; z[3]++)
                        {
                            getpass[3] = check[z[3]];
                            for (z[4] = lim1; z[4] < lim; z[4]++)
                            {
                                getpass[4] = check[z[4]];
                                for (z[5] = lim1; z[5] < lim; z[5]++)
                                {
                                    getpass[5] = check[z[5]];
                                    track = 0;
                                    for (i = 0; i < n; i++)
                                    {
                                        if (getpass[i] == setpass[i])
                                        {
                                            track++;
                                        }
                                    }
                                    if (track == n)
                                    {
                                        printf("\n\n%s : MATCHED !!!\n\n", getpass);
                                        goto end;
                                    }
                                    printf("%s : ERROR ...\n", getpass);
                                }
                            }
                        }
                    }
                }
            }
            break;

        case 7:
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        for (z[3] = lim1; z[3] < lim; z[3]++)
                        {
                            getpass[3] = check[z[3]];
                            for (z[4] = lim1; z[4] < lim; z[4]++)
                            {
                                getpass[4] = check[z[4]];
                                for (z[5] = lim1; z[5] < lim; z[5]++)
                                {
                                    getpass[5] = check[z[5]];
                                    for (z[6] = lim1; z[6] < lim; z[6]++)
                                    {
                                        getpass[6] = check[z[6]];
                                        track = 0;
                                        for (i = 0; i < n; i++)
                                        {
                                            if (getpass[i] == setpass[i])
                                            {
                                                track++;
                                            }
                                        }
                                        if (track == n)
                                        {
                                            printf("\n\n%s : MATCHED !!!\n\n", getpass);
                                            goto end;
                                        }
                                        printf("%s : ERROR ...\n", getpass);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;

        case 8:
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        for (z[3] = lim1; z[3] < lim; z[3]++)
                        {
                            getpass[3] = check[z[3]];
                            for (z[4] = lim1; z[4] < lim; z[4]++)
                            {
                                getpass[4] = check[z[4]];
                                for (z[5] = lim1; z[5] < lim; z[5]++)
                                {
                                    getpass[5] = check[z[5]];
                                    for (z[6] = lim1; z[6] < lim; z[6]++)
                                    {
                                        getpass[6] = check[z[6]];
                                        for (z[7] = lim1; z[7] < lim; z[7]++)
                                        {
                                            getpass[7] = check[z[7]];
                                            track = 0;
                                            for (i = 0; i < n; i++)
                                            {
                                                if (getpass[i] == setpass[i])
                                                {
                                                    track++;
                                                }
                                            }
                                            if (track == n)
                                            {
                                                printf("\n\n%s : MATCHED !!!\n\n", getpass);
                                                goto end;
                                            }
                                            printf("%s : ERROR ...\n", getpass);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;

        case 9:
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        for (z[3] = lim1; z[3] < lim; z[3]++)
                        {
                            getpass[3] = check[z[3]];
                            for (z[4] = lim1; z[4] < lim; z[4]++)
                            {
                                getpass[4] = check[z[4]];
                                for (z[5] = lim1; z[5] < lim; z[5]++)
                                {
                                    getpass[5] = check[z[5]];
                                    for (z[6] = lim1; z[6] < lim; z[6]++)
                                    {
                                        getpass[6] = check[z[6]];
                                        for (z[7] = lim1; z[7] < lim; z[7]++)
                                        {
                                            getpass[7] = check[z[7]];
                                            for (z[8] = lim1; z[8] < lim; z[8]++)
                                            {
                                                getpass[8] = check[z[8]];
                                                track = 0;
                                                for (i = 0; i < n; i++)
                                                {
                                                    if (getpass[i] == setpass[i])
                                                    {
                                                        track++;
                                                    }
                                                }
                                                if (track == n)
                                                {
                                                    printf("\n\n%s : MATCHED !!!\n\n", getpass);
                                                    goto end;
                                                }
                                                printf("%s : ERROR ...\n", getpass);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;

        case 10:
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        for (z[3] = lim1; z[3] < lim; z[3]++)
                        {
                            getpass[3] = check[z[3]];
                            for (z[4] = lim1; z[4] < lim; z[4]++)
                            {
                                getpass[4] = check[z[4]];
                                for (z[5] = lim1; z[5] < lim; z[5]++)
                                {
                                    getpass[5] = check[z[5]];
                                    for (z[6] = lim1; z[6] < lim; z[6]++)
                                    {
                                        getpass[6] = check[z[6]];
                                        for (z[7] = lim1; z[7] < lim; z[7]++)
                                        {
                                            getpass[7] = check[z[7]];
                                            for (z[8] = lim1; z[8] < lim; z[8]++)
                                            {
                                                getpass[8] = check[z[8]];
                                                for (z[9] = lim1; z[9] < lim; z[9]++)
                                                {
                                                    getpass[9] = check[z[9]];
                                                    track = 0;
                                                    for (i = 0; i < n; i++)
                                                    {
                                                        if (getpass[i] == setpass[i])
                                                        {
                                                            track++;
                                                        }
                                                    }
                                                    if (track == n)
                                                    {
                                                        printf("\n\n%s : MATCHED !!!\n\n", getpass);
                                                        goto end;
                                                    }
                                                    printf("%s : ERROR ...\n", getpass);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;

        case 11:
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        for (z[3] = lim1; z[3] < lim; z[3]++)
                        {
                            getpass[3] = check[z[3]];
                            for (z[4] = lim1; z[4] < lim; z[4]++)
                            {
                                getpass[4] = check[z[4]];
                                for (z[5] = lim1; z[5] < lim; z[5]++)
                                {
                                    getpass[5] = check[z[5]];
                                    for (z[6] = lim1; z[6] < lim; z[6]++)
                                    {
                                        getpass[6] = check[z[6]];
                                        for (z[7] = lim1; z[7] < lim; z[7]++)
                                        {
                                            getpass[7] = check[z[7]];
                                            for (z[8] = lim1; z[8] < lim; z[8]++)
                                            {
                                                getpass[8] = check[z[8]];
                                                for (z[9] = lim1; z[9] < lim; z[9]++)
                                                {
                                                    getpass[9] = check[z[9]];
                                                    for (z[10] = lim1; z[10] < lim; z[10]++)
                                                    {
                                                        getpass[10] = check[z[10]];
                                                        track = 0;
                                                        for (i = 0; i < n; i++)
                                                        {
                                                            if (getpass[i] == setpass[i])
                                                            {
                                                                track++;
                                                            }
                                                        }
                                                        if (track == n)
                                                        {
                                                            printf("\n\n%s : MATCHED !!!\n\n", getpass);
                                                            goto end;
                                                        }
                                                        printf("%s : ERROR ...\n", getpass);
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;

        case 12:
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        for (z[3] = lim1; z[3] < lim; z[3]++)
                        {
                            getpass[3] = check[z[3]];
                            for (z[4] = lim1; z[4] < lim; z[4]++)
                            {
                                getpass[4] = check[z[4]];
                                for (z[5] = lim1; z[5] < lim; z[5]++)
                                {
                                    getpass[5] = check[z[5]];
                                    for (z[6] = lim1; z[6] < lim; z[6]++)
                                    {
                                        getpass[6] = check[z[6]];
                                        for (z[7] = lim1; z[7] < lim; z[7]++)
                                        {
                                            getpass[7] = check[z[7]];
                                            for (z[8] = lim1; z[8] < lim; z[8]++)
                                            {
                                                getpass[8] = check[z[8]];
                                                for (z[9] = lim1; z[9] < lim; z[9]++)
                                                {
                                                    getpass[9] = check[z[9]];
                                                    for (z[10] = lim1; z[10] < lim; z[10]++)
                                                    {
                                                        getpass[10] = check[z[10]];
                                                        for (z[11] = lim1; z[11] < lim; z[11]++)
                                                        {
                                                            getpass[11] = check[z[11]];
                                                            track = 0;
                                                            for (i = 0; i < n; i++)
                                                            {
                                                                if (getpass[i] == setpass[i])
                                                                {
                                                                    track++;
                                                                }
                                                            }
                                                            if (track == n)
                                                            {
                                                                printf("\n\n%s : MATCHED !!!\n\n", getpass);
                                                                goto end;
                                                            }
                                                            printf("%s : ERROR ...\n", getpass);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;

        case 13:
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        for (z[3] = lim1; z[3] < lim; z[3]++)
                        {
                            getpass[3] = check[z[3]];
                            for (z[4] = lim1; z[4] < lim; z[4]++)
                            {
                                getpass[4] = check[z[4]];
                                for (z[5] = lim1; z[5] < lim; z[5]++)
                                {
                                    getpass[5] = check[z[5]];
                                    for (z[6] = lim1; z[6] < lim; z[6]++)
                                    {
                                        getpass[6] = check[z[6]];
                                        for (z[7] = lim1; z[7] < lim; z[7]++)
                                        {
                                            getpass[7] = check[z[7]];
                                            for (z[8] = lim1; z[8] < lim; z[8]++)
                                            {
                                                getpass[8] = check[z[8]];
                                                for (z[9] = lim1; z[9] < lim; z[9]++)
                                                {
                                                    getpass[9] = check[z[9]];
                                                    for (z[10] = lim1; z[10] < lim; z[10]++)
                                                    {
                                                        getpass[10] = check[z[10]];
                                                        for (z[11] = lim1; z[11] < lim; z[11]++)
                                                        {
                                                            getpass[11] = check[z[11]];
                                                            for (z[12] = lim1; z[12] < lim; z[12]++)
                                                            {
                                                                getpass[12] = check[z[12]];
                                                                track = 0;
                                                                for (i = 0; i < n; i++)
                                                                {
                                                                    if (getpass[i] == setpass[i])
                                                                    {
                                                                        track++;
                                                                    }
                                                                }
                                                                if (track == n)
                                                                {
                                                                    printf("\n\n%s : MATCHED !!!\n\n", getpass);
                                                                    goto end;
                                                                }
                                                                printf("%s : ERROR ...\n", getpass);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;

        case 14:
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        for (z[3] = lim1; z[3] < lim; z[3]++)
                        {
                            getpass[3] = check[z[3]];
                            for (z[4] = lim1; z[4] < lim; z[4]++)
                            {
                                getpass[4] = check[z[4]];
                                for (z[5] = lim1; z[5] < lim; z[5]++)
                                {
                                    getpass[5] = check[z[5]];
                                    for (z[6] = lim1; z[6] < lim; z[6]++)
                                    {
                                        getpass[6] = check[z[6]];
                                        for (z[7] = lim1; z[7] < lim; z[7]++)
                                        {
                                            getpass[7] = check[z[7]];
                                            for (z[8] = lim1; z[8] < lim; z[8]++)
                                            {
                                                getpass[8] = check[z[8]];
                                                for (z[9] = lim1; z[9] < lim; z[9]++)
                                                {
                                                    getpass[9] = check[z[9]];
                                                    for (z[10] = lim1; z[10] < lim; z[10]++)
                                                    {
                                                        getpass[10] = check[z[10]];
                                                        for (z[11] = lim1; z[11] < lim; z[11]++)
                                                        {
                                                            getpass[11] = check[z[11]];
                                                            for (z[12] = lim1; z[12] < lim; z[12]++)
                                                            {
                                                                getpass[12] = check[z[12]];
                                                                for (z[13] = lim1; z[13] < lim; z[13]++)
                                                                {
                                                                    getpass[13] = check[z[13]];
                                                                    track = 0;
                                                                    for (i = 0; i < n; i++)
                                                                    {
                                                                        if (getpass[i] == setpass[i])
                                                                        {
                                                                            track++;
                                                                        }
                                                                    }
                                                                    if (track == n)
                                                                    {
                                                                        printf("\n\n%s : MATCHED !!!\n\n", getpass);
                                                                        goto end;
                                                                    }
                                                                    printf("%s : ERROR ...\n", getpass);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;

        case 15:
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        for (z[3] = lim1; z[3] < lim; z[3]++)
                        {
                            getpass[3] = check[z[3]];
                            for (z[4] = lim1; z[4] < lim; z[4]++)
                            {
                                getpass[4] = check[z[4]];
                                for (z[5] = lim1; z[5] < lim; z[5]++)
                                {
                                    getpass[5] = check[z[5]];
                                    for (z[6] = lim1; z[6] < lim; z[6]++)
                                    {
                                        getpass[6] = check[z[6]];
                                        for (z[7] = lim1; z[7] < lim; z[7]++)
                                        {
                                            getpass[7] = check[z[7]];
                                            for (z[8] = lim1; z[8] < lim; z[8]++)
                                            {
                                                getpass[8] = check[z[8]];
                                                for (z[9] = lim1; z[9] < lim; z[9]++)
                                                {
                                                    getpass[9] = check[z[9]];
                                                    for (z[10] = lim1; z[10] < lim; z[10]++)
                                                    {
                                                        getpass[10] = check[z[10]];
                                                        for (z[11] = lim1; z[11] < lim; z[11]++)
                                                        {
                                                            getpass[11] = check[z[11]];
                                                            for (z[12] = lim1; z[12] < lim; z[12]++)
                                                            {
                                                                getpass[12] = check[z[12]];
                                                                for (z[13] = lim1; z[13] < lim; z[13]++)
                                                                {
                                                                    getpass[13] = check[z[13]];
                                                                    for (z[14] = lim1; z[14] < lim; z[14]++)
                                                                    {
                                                                        getpass[14] = check[z[14]];
                                                                        track = 0;
                                                                        for (i = 0; i < n; i++)
                                                                        {
                                                                            if (getpass[i] == setpass[i])
                                                                            {
                                                                                track++;
                                                                            }
                                                                        }
                                                                        if (track == n)
                                                                        {
                                                                            printf("\n\n%s : MATCHED !!!\n\n", getpass);
                                                                            goto end;
                                                                        }
                                                                        printf("%s : ERROR ...\n", getpass);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
    end:
    end1_t = clock();
    total1_t = (double)(end1_t-start1_t) / CLOCKS_PER_SEC ;
        printf("\nHACKBOT The Password is : %s", getpass);
        for(i=0;i<14;i++)
        {
            getpass[i]='\0';
        }
        printf("\n\nTime elapsed : %0.6lf\n\nHACKBOT : Once again I'm Right!\nHACKBOT : What's Next \?\n", total1_t);

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
        printf("\nHACK BOT : Let's begin!!!\n\n");
        system("PAUSE");
        start2_t = clock();
        switch (n)
        {
        case 1:
        printf("\nLOADING ...\n");
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                track = 0;
                for (i = 0; i < n; i++)
                {
                    if (getpass[i] == setpass[i])
                    {
                        track++;
                    }
                }
                if (track == n)
                {
                    printf("\n\n%s : MATCHED !!!\n\n", getpass);
                    goto end1;
                }
            }
            break;

        case 2:
        printf("\nLOADING ...\n");
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];

                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    track = 0;
                    for (i = 0; i < n; i++)
                    {
                        if (getpass[i] == setpass[i])
                        {
                            track++;
                        }
                    }
                    if (track == n)
                    {
                        printf("\n\n%s : MATCHED !!!\n\n", getpass);
                        goto end1;
                    }
                }
            }
            break;

        case 3:
        printf("\nLOADING ...\n");
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        track = 0;
                        for (i = 0; i < n; i++)
                        {
                            if (getpass[i] == setpass[i])
                            {
                                track++;
                            }
                        }
                        if (track == n)
                        {
                            printf("\n\n%s : MATCHED !!!\n\n", getpass);
                            goto end1;
                        }
                    }
                }
            }
            break;

        case 4:
        printf("\nLOADING ...\n");
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        for (z[3] = lim1; z[3] < lim; z[3]++)
                        {
                            getpass[3] = check[z[3]];
                            track = 0;
                            for (i = 0; i < n; i++)
                            {
                                if (getpass[i] == setpass[i])
                                {
                                    track++;
                                }
                            }
                            if (track == n)
                            {
                                printf("\n\n%s : MATCHED !!!\n\n", getpass);
                                goto end1;
                            }
                        }
                    }
                }
            }
            break;

        case 5:
        printf("\nLOADING ...\n");
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        for (z[3] = lim1; z[3] < lim; z[3]++)
                        {
                            getpass[3] = check[z[3]];
                            for (z[4] = lim1; z[4] < lim; z[4]++)
                            {
                                getpass[4] = check[z[4]];
                                track = 0;
                                for (i = 0; i < n; i++)
                                {
                                    if (getpass[i] == setpass[i])
                                    {
                                        track++;
                                    }
                                }
                                if (track == n)
                                {
                                    printf("\n\n%s : MATCHED !!!\n\n", getpass);
                                    goto end1;
                                }
                            }
                        }
                    }
                }
            }
            break;

        case 6:
        printf("\nLOADING ...\n");
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        for (z[3] = lim1; z[3] < lim; z[3]++)
                        {
                            getpass[3] = check[z[3]];
                            for (z[4] = lim1; z[4] < lim; z[4]++)
                            {
                                getpass[4] = check[z[4]];
                                for (z[5] = lim1; z[5] < lim; z[5]++)
                                {
                                    getpass[5] = check[z[5]];
                                    track = 0;
                                    for (i = 0; i < n; i++)
                                    {
                                        if (getpass[i] == setpass[i])
                                        {
                                            track++;
                                        }
                                    }
                                    if (track == n)
                                    {
                                        printf("\n\n%s : MATCHED !!!\n\n", getpass);
                                        goto end1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;

        case 7:
        printf("\nLOADING ...\n");
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        for (z[3] = lim1; z[3] < lim; z[3]++)
                        {
                            getpass[3] = check[z[3]];
                            for (z[4] = lim1; z[4] < lim; z[4]++)
                            {
                                getpass[4] = check[z[4]];
                                for (z[5] = lim1; z[5] < lim; z[5]++)
                                {
                                    getpass[5] = check[z[5]];
                                    for (z[6] = lim1; z[6] < lim; z[6]++)
                                    {
                                        getpass[6] = check[z[6]];
                                        track = 0;
                                        for (i = 0; i < n; i++)
                                        {
                                            if (getpass[i] == setpass[i])
                                            {
                                                track++;
                                            }
                                        }
                                        if (track == n)
                                        {
                                            printf("\n\n%s : MATCHED !!!\n\n", getpass);
                                            goto end1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;

        case 8:
        printf("\nLOADING ...\n");
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        for (z[3] = lim1; z[3] < lim; z[3]++)
                        {
                            getpass[3] = check[z[3]];
                            for (z[4] = lim1; z[4] < lim; z[4]++)
                            {
                                getpass[4] = check[z[4]];
                                for (z[5] = lim1; z[5] < lim; z[5]++)
                                {
                                    getpass[5] = check[z[5]];
                                    for (z[6] = lim1; z[6] < lim; z[6]++)
                                    {
                                        getpass[6] = check[z[6]];
                                        for (z[7] = lim1; z[7] < lim; z[7]++)
                                        {
                                            getpass[7] = check[z[7]];
                                            track = 0;
                                            for (i = 0; i < n; i++)
                                            {
                                                if (getpass[i] == setpass[i])
                                                {
                                                    track++;
                                                }
                                            }
                                            if (track == n)
                                            {
                                                printf("\n\n%s : MATCHED !!!\n\n", getpass);
                                                goto end1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;

        case 9:
        printf("\nLOADING ...\n");
            for (z[0] = 0; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        for (z[3] = lim1; z[3] < lim; z[3]++)
                        {
                            getpass[3] = check[z[3]];
                            for (z[4] = lim1; z[4] < lim; z[4]++)
                            {
                                getpass[4] = check[z[4]];
                                for (z[5] = lim1; z[5] < lim; z[5]++)
                                {
                                    getpass[5] = check[z[5]];
                                    for (z[6] = lim1; z[6] < lim; z[6]++)
                                    {
                                        getpass[6] = check[z[6]];
                                        for (z[7] = lim1; z[7] < lim; z[7]++)
                                        {
                                            getpass[7] = check[z[7]];
                                            for (z[8] = lim1; z[8] < lim; z[8]++)
                                            {
                                                getpass[8] = check[z[8]];
                                                track = 0;
                                                for (i = 0; i < n; i++)
                                                {
                                                    if (getpass[i] == setpass[i])
                                                    {
                                                        track++;
                                                    }
                                                }
                                                if (track == n)
                                                {
                                                    printf("\n\n%s : MATCHED !!!\n\n", getpass);
                                                    goto end1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;

        case 10:
        printf("\nLOADING ...\n");
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        for (z[3] = lim1; z[3] < lim; z[3]++)
                        {
                            getpass[3] = check[z[3]];
                            for (z[4] = lim1; z[4] < lim; z[4]++)
                            {
                                getpass[4] = check[z[4]];
                                for (z[5] = lim1; z[5] < lim; z[5]++)
                                {
                                    getpass[5] = check[z[5]];
                                    for (z[6] = lim1; z[6] < lim; z[6]++)
                                    {
                                        getpass[6] = check[z[6]];
                                        for (z[7] = lim1; z[7] < lim; z[7]++)
                                        {
                                            getpass[7] = check[z[7]];
                                            for (z[8] = lim1; z[8] < lim; z[8]++)
                                            {
                                                getpass[8] = check[z[8]];
                                                for (z[9] = lim1; z[9] < lim; z[9]++)
                                                {
                                                    getpass[9] = check[z[9]];
                                                    track = 0;
                                                    for (i = 0; i < n; i++)
                                                    {
                                                        if (getpass[i] == setpass[i])
                                                        {
                                                            track++;
                                                        }
                                                    }
                                                    if (track == n)
                                                    {
                                                        printf("\n\n%s : MATCHED !!!\n\n", getpass);
                                                        goto end1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;

        case 11:
        printf("\nLOADING ...\n");
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        for (z[3] = lim1; z[3] < lim; z[3]++)
                        {
                            getpass[3] = check[z[3]];
                            for (z[4] = lim1; z[4] < lim; z[4]++)
                            {
                                getpass[4] = check[z[4]];
                                for (z[5] = lim1; z[5] < lim; z[5]++)
                                {
                                    getpass[5] = check[z[5]];
                                    for (z[6] = lim1; z[6] < lim; z[6]++)
                                    {
                                        getpass[6] = check[z[6]];
                                        for (z[7] = lim1; z[7] < lim; z[7]++)
                                        {
                                            getpass[7] = check[z[7]];
                                            for (z[8] = lim1; z[8] < lim; z[8]++)
                                            {
                                                getpass[8] = check[z[8]];
                                                for (z[9] = lim1; z[9] < lim; z[9]++)
                                                {
                                                    getpass[9] = check[z[9]];
                                                    for (z[10] = lim1; z[10] < lim; z[10]++)
                                                    {
                                                        getpass[10] = check[z[10]];
                                                        track = 0;
                                                        for (i = 0; i < n; i++)
                                                        {
                                                            if (getpass[i] == setpass[i])
                                                            {
                                                                track++;
                                                            }
                                                        }
                                                        if (track == n)
                                                        {
                                                            printf("\n\n%s : MATCHED !!!\n\n", getpass);
                                                            goto end1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;

        case 12:
        printf("\nLOADING ...\n");
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        for (z[3] = lim1; z[3] < lim; z[3]++)
                        {
                            getpass[3] = check[z[3]];
                            for (z[4] = lim1; z[4] < lim; z[4]++)
                            {
                                getpass[4] = check[z[4]];
                                for (z[5] = lim1; z[5] < lim; z[5]++)
                                {
                                    getpass[5] = check[z[5]];
                                    for (z[6] = lim1; z[6] < lim; z[6]++)
                                    {
                                        getpass[6] = check[z[6]];
                                        for (z[7] = lim1; z[7] < lim; z[7]++)
                                        {
                                            getpass[7] = check[z[7]];
                                            for (z[8] = lim1; z[8] < lim; z[8]++)
                                            {
                                                getpass[8] = check[z[8]];
                                                for (z[9] = lim1; z[9] < lim; z[9]++)
                                                {
                                                    getpass[9] = check[z[9]];
                                                    for (z[10] = lim1; z[10] < lim; z[10]++)
                                                    {
                                                        getpass[10] = check[z[10]];
                                                        for (z[11] = lim1; z[11] < lim; z[11]++)
                                                        {
                                                            getpass[11] = check[z[11]];
                                                            track = 0;
                                                            for (i = 0; i < n; i++)
                                                            {
                                                                if (getpass[i] == setpass[i])
                                                                {
                                                                    track++;
                                                                }
                                                            }
                                                            if (track == n)
                                                            {
                                                                printf("\n\n%s : MATCHED !!!\n\n", getpass);
                                                                goto end1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;

        case 13:
        printf("\nLOADING ...\n");
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        for (z[3] = lim1; z[3] < lim; z[3]++)
                        {
                            getpass[3] = check[z[3]];
                            for (z[4] = lim1; z[4] < lim; z[4]++)
                            {
                                getpass[4] = check[z[4]];
                                for (z[5] = lim1; z[5] < lim; z[5]++)
                                {
                                    getpass[5] = check[z[5]];
                                    for (z[6] = lim1; z[6] < lim; z[6]++)
                                    {
                                        getpass[6] = check[z[6]];
                                        for (z[7] = lim1; z[7] < lim; z[7]++)
                                        {
                                            getpass[7] = check[z[7]];
                                            for (z[8] = lim1; z[8] < lim; z[8]++)
                                            {
                                                getpass[8] = check[z[8]];
                                                for (z[9] = lim1; z[9] < lim; z[9]++)
                                                {
                                                    getpass[9] = check[z[9]];
                                                    for (z[10] = lim1; z[10] < lim; z[10]++)
                                                    {
                                                        getpass[10] = check[z[10]];
                                                        for (z[11] = lim1; z[11] < lim; z[11]++)
                                                        {
                                                            getpass[11] = check[z[11]];
                                                            for (z[12] = lim1; z[12] < lim; z[12]++)
                                                            {
                                                                getpass[12] = check[z[12]];
                                                                track = 0;
                                                                for (i = 0; i < n; i++)
                                                                {
                                                                    if (getpass[i] == setpass[i])
                                                                    {
                                                                        track++;
                                                                    }
                                                                }
                                                                if (track == n)
                                                                {
                                                                    printf("\n\n%s : MATCHED !!!\n\n", getpass);
                                                                    goto end1;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;

        case 14:
        printf("\nLOADING ...\n");
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        for (z[3] = lim1; z[3] < lim; z[3]++)
                        {
                            getpass[3] = check[z[3]];
                            for (z[4] = lim1; z[4] < lim; z[4]++)
                            {
                                getpass[4] = check[z[4]];
                                for (z[5] = lim1; z[5] < lim; z[5]++)
                                {
                                    getpass[5] = check[z[5]];
                                    for (z[6] = lim1; z[6] < lim; z[6]++)
                                    {
                                        getpass[6] = check[z[6]];
                                        for (z[7] = lim1; z[7] < lim; z[7]++)
                                        {
                                            getpass[7] = check[z[7]];
                                            for (z[8] = lim1; z[8] < lim; z[8]++)
                                            {
                                                getpass[8] = check[z[8]];
                                                for (z[9] = lim1; z[9] < lim; z[9]++)
                                                {
                                                    getpass[9] = check[z[9]];
                                                    for (z[10] = lim1; z[10] < lim; z[10]++)
                                                    {
                                                        getpass[10] = check[z[10]];
                                                        for (z[11] = lim1; z[11] < lim; z[11]++)
                                                        {
                                                            getpass[11] = check[z[11]];
                                                            for (z[12] = lim1; z[12] < lim; z[12]++)
                                                            {
                                                                getpass[12] = check[z[12]];
                                                                for (z[13] = lim1; z[13] < lim; z[13]++)
                                                                {
                                                                    getpass[13] = check[z[13]];
                                                                    track = 0;
                                                                    for (i = 0; i < n; i++)
                                                                    {
                                                                        if (getpass[i] == setpass[i])
                                                                        {
                                                                            track++;
                                                                        }
                                                                    }
                                                                    if (track == n)
                                                                    {
                                                                        printf("\n\n%s : MATCHED !!!\n\n", getpass);
                                                                        goto end1;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;

        case 15:
        printf("\nLOADING ...\n");
            for (z[0] = lim1; z[0] < lim; z[0]++)
            {
                getpass[0] = check[z[0]];
                for (z[1] = lim1; z[1] < lim; z[1]++)
                {
                    getpass[1] = check[z[1]];
                    for (z[2] = lim1; z[2] < lim; z[2]++)
                    {
                        getpass[2] = check[z[2]];
                        for (z[3] = lim1; z[3] < lim; z[3]++)
                        {
                            getpass[3] = check[z[3]];
                            for (z[4] = lim1; z[4] < lim; z[4]++)
                            {
                                getpass[4] = check[z[4]];
                                for (z[5] = lim1; z[5] < lim; z[5]++)
                                {
                                    getpass[5] = check[z[5]];
                                    for (z[6] = lim1; z[6] < lim; z[6]++)
                                    {
                                        getpass[6] = check[z[6]];
                                        for (z[7] = lim1; z[7] < lim; z[7]++)
                                        {
                                            getpass[7] = check[z[7]];
                                            for (z[8] = lim1; z[8] < lim; z[8]++)
                                            {
                                                getpass[8] = check[z[8]];
                                                for (z[9] = lim1; z[9] < lim; z[9]++)
                                                {
                                                    getpass[9] = check[z[9]];
                                                    for (z[10] = lim1; z[10] < lim; z[10]++)
                                                    {
                                                        getpass[10] = check[z[10]];
                                                        for (z[11] = lim1; z[11] < lim; z[11]++)
                                                        {
                                                            getpass[11] = check[z[11]];
                                                            for (z[12] = lim1; z[12] < lim; z[12]++)
                                                            {
                                                                getpass[12] = check[z[12]];
                                                                for (z[13] = lim1; z[13] < lim; z[13]++)
                                                                {
                                                                    getpass[13] = check[z[13]];
                                                                    for (z[14] = lim1; z[14] < lim; z[14]++)
                                                                    {
                                                                        getpass[14] = check[z[14]];
                                                                        track = 0;
                                                                        for (i = 0; i < n; i++)
                                                                        {
                                                                            if (getpass[i] == setpass[i])
                                                                            {
                                                                                track++;
                                                                            }
                                                                        }
                                                                        if (track == n)
                                                                        {
                                                                            printf("\n\n%s : MATCHED !!!\n\n", getpass);
                                                                            goto end1;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        }
    end1:
    end2_t = clock();
    total2_t = (double)(end2_t-start2_t) / CLOCKS_PER_SEC ;
        printf("\nHACKBOT The Password is : %s", getpass);
        for(i=0;i<14;i++)
        {
            getpass[i]='\0';
        }
        printf("\n\nTime elapsed : %0.6lf\n\nHACKBOT : Once again I'm Right!\nHACKBOT : What's Next \?\n", total2_t);

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

    printf("n : %d\n", n);

    system("PAUSE");
    return 0;
}