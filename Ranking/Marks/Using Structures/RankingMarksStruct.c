#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct students
{
    int roll;
    char name[100];
    int marks;
};

int main()
{
    int i, j, n;
    struct students data[1000], m;

    printf("Enter total number of students : ");
    scanf("%d", &n);
    printf("\n");

    for (i = 0; i < n; i++)
    {
        printf("Roll Number : ");
        scanf("%d", &data[i].roll);
        printf("Name : ");
        scanf(" %[^\n]%*c", &data[i].name);
        printf("Marks : ");
        scanf("%d", &data[i].marks);
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        for(j=(i+1);j<n;j++)
        {
            if(data[i].marks < data[j].marks)
            {
                m=data[i];
                data[i]=data[j];
                data[j]=m;
            }
        }
    }

    printf("\nRank List ...\n");

    for(i=0;i<n;i++)
    {
        printf("%d >>> Roll=%d > %s ( Marks = %d)\n", (i+1), data[i].roll, data[i].name, data[i].marks);
    }

    system("PAUSE");
    return 0;
}