#include<stdio.h>

int main(){
    int choice;
    float balance=5000;
    float amount;

    printf("1.Withdraw\n");
    printf("2.Deposit\n");

    printf("Enter choice: ");
    scanf("%d",&choice);

    printf("Enter amount: ");
    scanf("%f",&amount);

    if(choice==1)
        balance=balance-amount;

    else if(choice==2)
        balance=balance+amount;

    printf("Balance = %.2f",balance);

    return 0;
}