#include<stdio.h>

int main(){
    char item[50];
    int quantity;

    printf("Enter item name: ");
    scanf("%s",item);

    printf("Enter quantity: ");
    scanf("%d",&quantity);

    printf("\nInventory Details\n");

    printf("Item = %s\n",item);
    printf("Quantity = %d",quantity);

    return 0;
}