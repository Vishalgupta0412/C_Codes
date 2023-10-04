#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void insert(FILE *fp);
void display(FILE *fp);
struct
{
    char name[50];
    int ncopies;
    float price;
} book;
int main(void)
{
    int choice;
    FILE *fp;
    fp = fopen("books", "rb+");
    if (fp == NULL)
    {
        fp = fopen("books", "wb+");
        if (fp == NULL)
        {
            puts("Error\n");
            exit(1);
        }
    }
    return 0;
}
while(1)
{
    printf("1.insert\n");
    printf("2.display\n");
    printf("3.exit\n");
    printf("enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        insert(fp);
        break;
    case 2:
        display(fp);
        break;
    case 3:
        fclose(fp);
        exit(1);
    default:
        printf("wrong choice\n");
    }
}
void insert(FILE *fp)
{
    fseek(fp, 0, SEEK_END);
    printf("enter book name: ");
    scanf("%[^\n]s", book.name);
    printf("enter number of copies : ");
    scanf("%d", &book.ncopies);
    printf("enter price : ");
    scanf("%f", &book.price);
    fwrite(&book, sizeof(book), 1, fp);
}
void display(FILE *fp)

{
    char name[50];
    printf("enter name of book:");
    scanf("%[^\n]s", name);
    if (search(fp, name) == 1)
    {
        printf("\nName=%s", book.name);
        printf("Copies=%d\n", book.ncopies);
        printf("Price=%f\n", book.price);
    }
   // printf("\n");
}
