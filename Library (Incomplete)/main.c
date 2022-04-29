#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_word_size 100

typedef struct
{
    int ID;
    char *name;
} Student;

typedef struct
{
    int ID;
    char *title;
    char *author;
    int isIssued;
    Student *student;
} Book;

struct node
{
    Book *book;
    struct node *next;
};

void getStudentInfo(Student *student)
{
    printf("\n");
    printf("Student ID : %d\n", student->ID);
    printf("Student name : %s\n", student->name);
    printf("\n");
}

void getBookInfo(Book *book)
{
    printf("\n");
    printf("Book ID : %d\n", book->ID);
    printf("Title : %s\n", book->title);
    printf("Author : %s\n", book->author);

    printf("Status : ");
    if (book->isIssued)
    {
        printf("ISSUED\n");
        printf("Issued by : ");
        getStudentInfo(book->student);
    }
    else
        printf("NOT ISSUED\n");
    printf("\n");
}

int IDisPresent(int ID, struct node *head)
{
    while (head != NULL)
    {
        if (ID == head->book->ID)
        {
            printf("A book with the same ID exists : ");
            getBookInfo(head->book);
            return 1;
        }
        head = head->next;
    }
    return 0;
}

Book *setBookInfo(struct node *head)
{
    Book *newBook = (Book *)malloc(sizeof(Book));
    char text[max_word_size];

    do
    {
        printf("Enter book ID : ");
        scanf("%d", &newBook->ID);
    } while (IDisPresent(newBook->ID, head));
    getchar();

    printf("Enter book title : ");
    gets(text);
    newBook->title = (char *)malloc((strlen(text) + 1) * sizeof(char));
    strcpy(newBook->title, text);

    printf("Enter author's name : ");
    gets(text);
    newBook->author = (char *)malloc((strlen(text) + 1) * sizeof(char));
    strcpy(newBook->author, text);

    newBook->isIssued = 0;

    return newBook;
}

Student *setStudentInfo()
{
    Student *newStudent = (Student *)malloc(sizeof(Student));
    char text[max_word_size];

    printf("Enter student ID : ");
    scanf("%d", &newStudent->ID);
    getchar();

    printf("Enter student name : ");
    gets(text);
    newStudent->name = (char *)malloc((strlen(text) + 1) * sizeof(char));
    strcpy(newStudent->name, text);

    return newStudent;
}

void setIssueInfo(struct node *head)
{
    char text[max_word_size];

    getchar();
    printf("Enter book title : ");
    gets(text);

    while (head != NULL)
    {
        if (strcmp(text, head->book->title) == 0)
        {
            head->book->isIssued = 1;
            head->book->student = setStudentInfo();
            return;
        }
    }
    printf("Sorry... %s is not available\n", text);
}

struct node *addBook(struct node *head)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->next = head;
    new->book = setBookInfo(head);
    return new;
}

void displayBooks(struct node *head)
{
    int i = 0;
    while (head != NULL)
    {
        getBookInfo(head->book);
        head = head->next;
    }
}

void displayAvailableBooks(struct node *head)
{
    while (head != NULL)
    {
        if (!head->book->isIssued)
            getBookInfo(head->book);
        head = head->next;
    }
}

void displayIssuedBooks(struct node *head)
{
    while (head != NULL)
    {
        if (head->book->isIssued)
            getBookInfo(head->book);
        head = head->next;
    }
}

int chooseMenu()
{
    int choice;
    printf("Choose an option.\n");
    while (1)
    {
        printf("0 = Exit.\n");
        printf("1 = Add a book.\n");
        printf("2 = Display.\n");
        printf("3 = Issue a book.\n");
        printf("User : ");
        scanf("%d", &choice);
        if (choice >= 0 && choice <= 3)
            break;
        printf("\nChoose again...\n");
    }
    return choice;
}

int chooseDisplay()
{
    int choice;
    printf("Choose an option.\n");
    while (1)
    {
        printf("0 = Return to main menu.\n");
        printf("1 = Display list of books.\n");
        printf("2 = Display list of available books.\n");
        printf("3 = Display list of issued books.\n");
        printf("4 = Display list of students.\n");
        printf("User : ");
        scanf("%d", &choice);
        if (choice >= 0 && choice <= 4)
            break;
        printf("\nChoose again...\n");
    }
    return choice;
}

int main()
{
    struct node *head = NULL;

    while (1)
    {
        switch (chooseMenu())
        {
        case 1:
            head = addBook(head);
            break;

        case 2:
            switch (chooseDisplay())
            {
            case 0:
                continue;

            case 1:
                displayBooks(head);
                break;

            case 2:
                displayAvailableBooks(head);
                break;

            case 3:
                displayIssuedBooks(head);
                break;

            case 4:
                break;
            }
            break;

        case 3:
            setIssueInfo(head);
            break;

        case 0:
            printf("Thanks for using...\n");
            exit(0);
        }
    }
    return 0;
}