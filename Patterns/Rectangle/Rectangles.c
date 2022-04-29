#include<stdio.h>
#include<stdlib.h>

int main()
{
    int l, b, i, j, t;
    char c;
    
    for(i=0;;i++)
    {
    printf("Enter a Character you want to print with.\n");
    scanf(" %c", &c);
    printf("Which Rectangle type do you want \?\n1 = Shaded\n2 = Outline\n");
    scanf("%d", &t);
    printf("Enter the Length of the Rectangle.\n");
    scanf("%d", &l);
    printf("Enter the Breadth of the Rectangle.\n");
    scanf("%d", &b);
    printf("\n");

    switch(t)
    {
    case 1:
    for(i=1;i<=b;i++)
    {
        for(j=1;j<=l;j++)
        {
            printf("%c ", c);
            if(j>l)
            {break;}
        }
        printf("\n");
        if(i>b)
        {break;}
    }
    printf("\n");
    break;

    case 2:
    for(j=1;j<=l;j++)
        {
            printf("%c ", c);
            if(j>l)
            {break;}
        }
        printf("\n");
    for(i=2;i<=(b-1);i++)
    {
        printf("%c ", c);
        for(j=2;j<=(l-1);j++)
        {
            printf("  ");
            if(j>(l-1))
            {break;}
        }
        printf("%c ", c);
        printf("\n");
        if(i>(b-1))
        {break;}
    }
    for(j=1;j<=l;j++)
        {
            printf("%c ", c);
            if(j>l)
            {break;}
        }
        printf("\n\n");
    break;
    }
    }
    system("PAUSE");
    return 0 ;
}