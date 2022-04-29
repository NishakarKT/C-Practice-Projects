#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int TagRemover(char *str)
{
    char str1[10000], strF[10000], strL[10000];
    int a = 0, b = 0, i;

    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == '<')
        {
            a = 1;
            continue;
        }
        else if (str[i] == '>')
        {
            a = 0;
            continue;
        }
        if (a == 0)
        {
            str1[b] = str[i];
            b++;
        }
    }
    strcpy(str, str1);
}

int SpacesRectifier(char * str)
{
    char str1[10000];
    int i;

    while(str[0]==' ')
    {
        for(i=0;i<strlen(str);i++)
        {
            str1[i]=str[i+1];
        }
        str1[strlen(str)]='\0';
        strcpy(str,str1);
    }
    while(str[strlen(str) - 1]==' ')
    {
        for(i=0;i<(strlen(str)-1);i++)
        {
            str1[i]=str[i];
        }
        str1[strlen(str)-1]='\0';
        strcpy(str,str1);
    }
}

int main()
{
    char user[10000], output[10000];

    printf("Enter HTML code : ");
    gets(user);

    TagRemover(user);
    SpacesRectifier(user);

    printf("Output : ~~%s~~\n", user);

    system("PAUSE");
    return 0;
}