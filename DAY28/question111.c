#include<stdio.h>

int main(){
    char name[50];
    int tickets;

    printf("Enter name: ");
    scanf("%s",name);

    printf("Enter number of tickets: ");
    scanf("%d",&tickets);

    printf("\nBooking Successful\n");

    printf("Name = %s\n",name);
    printf("Tickets = %d",tickets);

    return 0;
}