#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct bill
{
    char serial[50];
    char date[25];
    char name[25];
    char goods[50][50];
    int quantity[50];
    int price[50];
    int phone[10];
    char email[100];
};

int main()
{
    int i, j, n, T[50], sum[50], track[50];
    struct bill data[100];

    printf("Enter total number of entries to be made : ");
    scanf("%d", &n);
    printf("\n");

    for (i = 0; i < 50; i++)
    {
        track[i] = 0;
        sum[i] = 0;
        T[i] = 0;
    }

    for (i = 0; i < n; i++)
    {
        printf("\nSerial Number : ");
        scanf(" %[^\n]%*c", &data[i].serial);
        printf("Date (DD/MM/YYYY) : ");
        scanf(" %[^\n]%*c", &data[i].date);
        printf("Name : ");
        scanf(" %[^\n]%*c", &data[i].name);
        printf("Phone Number : ");
        scanf(" %[^\n]%*c", &data[i].phone);
        printf("Email ID : ");
        scanf(" %[^\n]%*c", &data[i].email);

        for (j = 0;; j++)
        {
            printf("Good '%d' : ", (j + 1));
            scanf(" %[^\n]%*c", &data[i].goods[j]);
            if (strcmp(data[i].goods[j], "end") == 0)
            {
                break;
            }
            printf("Price of '%s' : ", data[i].goods[j]);
            scanf("%d", &data[i].price[j]);
            printf("Quantity : ");
            scanf("%d", &data[i].quantity[j]);

            sum[i] = sum[i] + (data[i].price[j]) * (data[i].quantity[j]);

            track[i]++;
        }
        T[i] = sum[i];
    }

    printf("\nBILL...\n");
    printf("\nBig Bazaar\nBhubaneswar, Odisha (702316)\n");

    for (i = 0; i < n; i++)
    {
        printf("\n%s\n", data[i].serial);
        printf("\nName : %s\n", data[i].name);
        printf("Phone Number : %d\n", data[i].phone);
        printf("Email ID : %s\n\n", data[i].email);

        for (j = 0; j < track[i]; j++)
        {
            printf("%d >>> %s (Price : %d)  (Quantity : %d)  >>>  SubTotal Price : %d\n", (j + 1), data[i].goods[j], data[i].price[j], data[i].quantity[j], (data[i].price[j]) * (data[i].quantity[j]));
        }
        printf("\nTotal Ammount : %d\n\n", T[i]);
        printf("Thanks for shoping...See you soon...\n");
        printf("Contact : 9998887776, 9988776655\n\n");
    }

    system("PAUSE");
    return 0;
}