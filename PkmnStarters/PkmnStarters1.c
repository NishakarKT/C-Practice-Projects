#include<stdio.h>
#include<stdlib.h>

int main()
{
    int T, P;

    printf("Welcome To PkmnStarters!!!\nThis Is The Best Guide For You In Choosing The Right Starter Pokemon For Your Journey!!!\n");
    printf("Which Pokemon Type Do You Prefer\?\n1 = Fire\n2 = Water\n3 = Grass\n\a");
    scanf("%d", &T);

    if(T==1)
    {
        printf("Here's A List Of All The Fire Type Pokemon Starters!!!\n1) Charmander\n2) Cyndaquil\n3) Torchic\n4) Chimchar\n5) Tepig\n6) Fennekin\n7) Litten\n8) Scorbunny\n");
        printf("Enter The Pokemon Number To Get Its Data.\n\a");
        scanf("%d", &P);

        if(P==1)
        {
            printf("STATS:\nName : Charmander\nHP : 39\nAttack : 52\nSp. Attack : 60\nDefense : 43\nSp. Defense : 50\nSpeed : 65\nFinal Evolution : Charizard\nRating(/10) :9.5\n\a");
        }
        else if(P==2)
        {
            printf("STATS:\nName : Cyndaquil\nHP : 39\nAttack : 52\nSp. Attack : 60\nDefense : 43\nSp. Defense : 50\nSpeed : 65\nFinal Evolution : Typhlosion\nRating(/10) : 9\n\a");
        }
        else if(P==3)
        {
            printf("STATS:\nName : Torchic\nHP : 45\nAttack : 60\nSp. Attack : 70\nDefense : 40\nSp. Defense : 50\nSpeed : 45\nFinal Evolution : Blaziken\nRating(/10) : 9.5\n\a");
        }
        else if(P==4)
        {
            printf("STATS:\nName : Chimchar\nHP : 44\nAttack : 58\nSp. Attack : 58\nDefense :44 \nSp. Defense : 44\nSpeed : 61\nFinal Evolution : Infernape\nRating(/10) : 9\n\a");
        }
        else if(P==5)
        {
            printf("STATS:\nName : Tepig\nHP : 65\nAttack : 63\nSp. Attack : 45\nDefense : 45\nSp. Defense : 45\nSpeed : 45\nFinal Evolution : Emboar\nRating(/10) : 8.5\n\a");
        }
        else if(P==6)
        {
            printf("STATS:\nName : Fennekin\nHP : 40\nAttack : 45\nSp. Attack : 62\nDefense : 40\nSp. Defense : 60\nSpeed : 60\nFinal Evolution : Delphox\nRating(/10) : 8.5\n\a");
        }
        else if(P==7)
        {
            printf("STATS:\nName : Litten\nHP : 45\nAttack : 65\nSp. Attack : 60\nDefense : 40\nSp. Defense : 40\nSpeed : 70\nFinal Evolution : Incineroar\nRating(/10) : 9\n\a");
        }
        else if(P==8)
        {
            printf("STATS:\nName : Scorbunny\nHP : 50\nAttack : 71\nSp. Attack : 40\nDefense : 40\nSp. Defense : 40\nSpeed : 69\nFinal Evolution : Cinderace\nRating(/10) : 9\n\a");
        }
        else
        {
            {printf("SORRY!!!\nNO DATA AVAILABLE!!!\nPlease Check The List Carefully.\n\a\a\a");}
        }
        
    }

    else if(T==2)
    {
        printf("Here's A List Of All The Water Type Pokemon Starters!!!\n1) Squirtle\n2) Totodile\n3) Mudkip\n4) Piplup\n5) Oshawott\n6) Froakie\n7) Popplio\n8) Sobble\n");
        printf("Enter The Pokemon Number To Get Its Data.\n\a");
        scanf("%d", &P);

        if(P==1)
        {
            printf("STATS:\nName : Squirtle\nHP : 44\nAttack : 48\nSp. Attack : 50\nDefense : 65\nSp. Defense : 64\nSpeed : 43\nFinal Evolution : Blastoise\nRating(/10) : 8.5\n\a");
        }
        else if(P==2)
        {
            printf("STATS:\nName : Totodile\nHP : 50\nAttack : 65\nSp. Attack : 44nDefense : 64\nSp. Defense : 48\nSpeed : 43\nFinal Evolution : Feraligatr\nRating(/10) : 9\n\a");
        }
        else if(P==3)
        {
            printf("STATS:\nName : Mudkip\nHP : 50\nAttack : 70\nSp. Attack : 50\nDefense : 50\nSp. Defense : 50\nSpeed : 40\nFinal Evolution : Swampert\nRating(/10) : 9.5\n\a");
        }
        else if(P==4)
        {
            printf("STATS:\nName : Piplup\nHP : 53\nAttack : 51\nSp. Attack : 61\nDefense : 53\nSp. Defense : 56\nSpeed : 40\nFinal Evolution : Empoleon\nRating(/10) : 9.5\n");
        }
        else if(P==5)
        {
            printf("STATS:\nName : Oshawott\nHP : 55\nAttack : 55\nSp. Attack : 63\nDefense : 45\nSp. Defense : 45\nSpeed : 45\nFinal Evolution : Samurott\nRating(/10) : 8.5\n");
        }
        else if(P==6)
        {
            printf("STATS:\nName : Froakie\nHP : 41\nAttack : 56\nSp. Attack : 62\nDefense : 40\nSp. Defense : 44\nSpeed : 71\nFinal Evolution : Greninja\nRating(/10) : 9\n\a");
        }
        else if(P==7)
        {
            printf("STATS:\nName : Popplio\nHP : 50\nAttack : 54\nSp. Attack : 66\nDefense : 54\nSp. Defense : 56\nSpeed : 40\nFinal Evolution : Primarina\nRating(/10) : 8.5\n\a");
        }
        else if(P==8)
        {
            printf("STATS:\nName : Sobble\nHP : 50\nAttack : 40\nSp. Attack : 70\nDefense : 40\nSp. Defense : 40\nSpeed : 70\nFinal Evolution : Inteleon\nRating(/10) : 8.5\n\a");
        }
        else
        {
            printf("SORRY!!!\nNO DATA AVAILABLE!!!\nPlease Check The List Carefully.\n\a\a\a");
        }
    }

    else if(T==3)
    {
        printf("Here's A List Of All The Grass Type Pokemon Starters!!!\n1) Bulbasaur\n2) Chikorita\n3) Treecko\n4) Turtwig\n5) Snivy\n6) Chespin\n7) Rowlet\n8) Grookey\n\a");
        printf("Enter The Pokemon Number To Get Its Data.\n\a");
        scanf("%d", &P);

        if(P==1)
        {
            printf("STATS:\nName : Bulbasaur\nHP : 45\nAttack : 49\nSp. Attack : 65\nDefense : 49\nSp. Defense : 65\nSpeed : 45\nFinal Evolution : Venusaur\nRating(/10) : 9\n\a");
        }
        else if(P==2)
        {
            printf("STATS:\nName : Chikorita\nHP : 45\nAttack : 49\nSp. Attack : 49\nDefense : 65\nSp. Defense : 65\nSpeed : 45\nFinal Evolution : Meganium\nRating(/10) : 8.5\n\a");
        }
        else if(P==3)
        {
            printf("STATS:\nName : Treecko\nHP : 40\nAttack : 45\nSp. Attack : 65\nDefense : 35\nSp. Defense : 55\nSpeed : 70\nFinal Evolution : Sceptile\nRating(/10) : 9\n\a");
        }
        else if(P==4)
        {
            printf("STATS:\nName : Turtwig\nHP : 55\nAttack : 68\nSp. Attack : 45\nDefense : 64\nSp. Defense : 55\nSpeed : 31\nFinal Evolution : Torterra\nRating(/10) : 9.5\n\a");
        }
        else if(P==5)
        {
            printf("STATS:\nName : Snivy\nHP : 45\nAttack : 45\nSp. Attack : 45\nDefense : 55\nSp. Defense : 55\nSpeed : 63\nFinal Evolution : Serperior\nRating(/10) : 8.5\n\a");
        }
        else if(P==6)
        {
            printf("STATS:\nName : Chespin\nHP : 56\nAttack : 61\nSp. Attack : 48\nDefense : 65\nSp. Defense : 45\nSpeed : 38\nFinal Evolution : Chesnaught\nRating(/10) : 9\n");
        }
        else if(P==7)
        {
            printf("STATS:\nName : Rowlet\nHP : 68\nAttack : 55\nSp. Attack : 50\nDefense : 55\nSp. Defense : 50\nSpeed : 42\nFinal Evolution : Decidueye\nRating(/10) : 9\n\a");
        }
        else if(P==8)
        {
            printf("STATS:\nName : Grookey\nHP : 50\nAttack : 65\nSp. Attack : 40\nDefense : 50\nSp. Defense : 40\nSpeed : 65\nFinal Evolution : Rillaboom\nRating(/10) : 9\n\a");
        }
        else
        {
            printf("SORRY!!!\nNO DATA AVAILABLE!!!\nPlease Check The List Carefully.\n\a\a\a");
        }
    }
    else
    {
        printf("SORRY!!!\nNO DATA AVAILABLE!!!\nPokemon Starters Are Either Of Fire, Water Or Grass Type Only!!!\n\a\a\a");
    }
    

    system("PAUSE");
    
    return 0;
}