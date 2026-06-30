#include<stdio.h>

int main(){
    int qty;
    float price,total;

    printf("Enter quantity: ");
    scanf("%d",&qty);

    printf("Enter price: ");
    scanf("%f",&price);

    total=qty*price;

    printf("Total Bill = %.2f",total);

    return 0;
}