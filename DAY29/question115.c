#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    int choice;

    printf("1.Length\n");
    printf("2.Reverse\n");

    printf("Enter choice: ");
    scanf("%d",&choice);

    printf("Enter string: ");
    scanf("%s",str);

    if(choice==1)
        printf("Length = %d",strlen(str));

    else if(choice==2){
        strrev(str);
        printf("%s",str);
    }

    else
        printf("Invalid Choice");

    return 0;
}