#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int err;
    int i, j, k, l, m;
    char check[10][15] = {"happy", "elephant", "favourite", "monkey"};
    char alp[26] = {"abcdefghijklmnopqrstuvwxyz"}, Alp[26] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char text1[10000], text[10000];

    printf("Features ...\n1. Full stop at the end of a sentence.\n2. (Upper/Lower)-Casing appropriate letters.\n3. Spelling-Check \n   (for accurate results wrong spelling and the right one both must have same number of letters.)\n4. 'i' to 'I'\n5. 'a' to 'an'\n\n");
    printf("Words available : \n");
    for (i = 0; i < 4; i++)
    {
        printf("%d >>> %s\n", (i + 1), check[i]);
    }
    printf("\n");

    for (i = m;; m++)
    {

        //Input Text
        printf("Enter text : ");
        scanf(" %[^\n]%*c", &text);

        //Fullstop
        if (text[strlen(text) - 1] != '.')
        {
            text[strlen(text)] = '.';
            text[strlen(text) + 1] = '\0';
        }

        //First Letter Capital Correction
        for (j = 0; j < 26; j++)
        {
            if (text[0] == alp[j])
            {
                text[0] = Alp[j];
            }
        }

        //Mid Text Capital Correction
        for (i = 0; i < strlen(text); i++)
        {
            if (text[i - 1] == ' ' && (text[i - 2] == '.' || text[i - 2] == '!' || text[i - 2] == '?'))
            {
                for (j = 0; j < 26; j++)
                {
                    if (text[i] == alp[j])
                    {
                        text[i] = Alp[j];
                    }
                }
            }
            else if (text[i - 1] == ' ' && (text[i - 2] != '.' && text[i - 2] != '!' && text[i - 2] != '?'))
            {
                for (j = 0; j < 26; j++)
                {
                    if (text[i] == Alp[j])
                    {
                        text[i] = alp[j];
                    }
                }
            }
            
        }

        //'a' to 'an
        for (i = 0; i < strlen(text); i++)
        {
            if ((text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u') && text[i - 1] == ' ' && text[i - 2] == 'a' && text[i - 3] == ' ')
            {
                for (j = 0; j < i; j++)
                {
                    text1[j] = text[j];
                }
                for (j = i; j <= strlen(text); j++)
                {
                    text1[j] = text[j - 1];
                }
                text1[i - 1] = 'n';
                text1[strlen(text) + 1] = '\0';
                strcpy(text, text1);
            }
        }

        //'i to 'I'
        for (i = 0; i < strlen(text); i++)
        {
            if (text[i] == ' ' && text[i - 1] == 'i' && text[i - 2] == ' ')
            {
                text[i - 1] = 'I';
            }
        }

        //Spelling Correction
        for (i = 0; i < strlen(text); i++)
        {
            for (j = 0; j < 10; j++)
            {
                err = 0;
                if (text[i] == check[j][0] && text[i - 1] == ' ')
                {
                    for (k = i, l = 0;; k++, l++)
                    {
                        if (text[k] == ' ' || text[k] == '.' || text[k] == '!' || text[k] == '?')
                        {
                            break;
                        }

                        if (text[k] != check[j][l])
                        {
                            err++;
                        }
                    }

                    if (err <= 2)
                    {
                        for (k = i, l = 0;; k++, l++)
                        {
                            if (text[k] == ' ' || text[k] == '.' || text[k] == '!' || text[k] == '?')
                            {
                                break;
                            }
                            text[k] = check[j][l];
                        }
                    }
                }
            }
        }

        //Printing Text
        printf("Corrected text >>> \"%s\"\n", text);
        printf("\n");

        for(i=0;i<9999;i++)
        {
            text[i]='\0';
            text1[i]='\0';
        }
    }

    return 0;
}