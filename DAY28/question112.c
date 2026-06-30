#include<stdio.h>

int main(){
    char name[50];
    long long phone;

    printf("Enter name: ");
    scanf("%s",name);

    printf("Enter phone number: ");
    scanf("%lld",&phone);

    printf("\nContact Saved\n");

    printf("Name = %s\n",name);
    printf("Phone = %lld",phone);

    return 0;
}
