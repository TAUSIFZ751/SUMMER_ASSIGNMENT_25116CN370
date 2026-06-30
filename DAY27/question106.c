#include<stdio.h>

int main(){
    int id;
    char name[50];
    float salary;

    printf("Enter employee id: ");
    scanf("%d",&id);

    printf("Enter name: ");
    scanf("%s",name);

    printf("Enter salary: ");
    scanf("%f",&salary);

    printf("\nEmployee Details\n");
    printf("ID = %d\n",id);
    printf("Name = %s\n",name);
    printf("Salary = %.2f",salary);

    return 0;
}