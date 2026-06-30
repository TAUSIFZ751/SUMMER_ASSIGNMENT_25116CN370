#include<stdio.h>

int main(){
    float salary;
    float bonus;
    float total;

    printf("Enter salary: ");
    scanf("%f",&salary);

    bonus=salary*0.10;

    total=salary+bonus;

    printf("Bonus = %.2f\n",bonus);
    printf("Total Salary = %.2f",total);

    return 0;
}