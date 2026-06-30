#include<stdio.h>

int main(){
    int bookid;
    char book[50];
    int choice;

    printf("1.Issue Book\n");
    printf("2.Return Book\n");

    printf("Enter choice: ");
    scanf("%d",&choice);

    printf("Enter Book ID: ");
    scanf("%d",&bookid);

    printf("Enter Book Name: ");
    scanf("%s",book);

    if(choice==1)
        printf("Book Issued");
    else if(choice==2)
        printf("Book Returned");
    else
        printf("Invalid Choice");

    return 0;
}