#include<stdio.h>

int main(){
    float balance,amount;
    int choice;

    printf("Enter balance: ");
    scanf("%f",&balance);

    printf("1.Deposit\n");
    printf("2.Withdraw\n");

    printf("Enter choice: ");
    scanf("%d",&choice);

    printf("Enter amount: ");
    scanf("%f",&amount);

    if(choice==1)
        balance=balance+amount;

    else if(choice==2)
        balance=balance-amount;

    printf("Current Balance = %.2f",balance);

    return 0;
}