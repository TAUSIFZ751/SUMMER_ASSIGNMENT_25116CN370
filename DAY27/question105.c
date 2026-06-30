#include<stdio.h>

int main(){
    int roll;
    char name[50];
    float marks;

    printf("Enter roll: ");
    scanf("%d",&roll);

    printf("Enter name: ");
    scanf("%s",name);

    printf("Enter marks: ");
    scanf("%f",&marks);

    printf("\nStudent Record\n");
    printf("Roll = %d\n",roll);
    printf("Name = %s\n",name);
    printf("Marks = %.2f",marks);

    return 0;
}