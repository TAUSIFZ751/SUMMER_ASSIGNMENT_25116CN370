#include<stdio.h>

int main(){
    char patient[50];
    int age;

    printf("Enter patient name: ");
    scanf("%s",patient);

    printf("Enter age: ");
    scanf("%d",&age);

    printf("\nPatient Details\n");

    printf("Name = %s\n",patient);
    printf("Age = %d",age);

    return 0;
}