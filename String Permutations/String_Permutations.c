#include<stdio.h.>
#include<string.h>

char temp;

void swap(char *str, int initial, int final)
{
    temp = str[initial];
    str[initial] = str[final];
    str[final] = temp;
}

void permute(char * str, int initial, int final)
{
    if(initial == final - 1)
    {
        swap(str, initial, initial+1);
        printf("%s\n", str);
        return;
    }
    else
    {
        str[0] = str[initial];
        swap(str, initial, initial + 1);
        printf("%s\n", str);
        permute(str, initial + 1, final);
    }
}

int main()
{
    char word[100];
    printf("Enter word : ");
    scanf("%s", &word);

    permute(word, 0, strlen(word) - 1);
    return 0 ;
}