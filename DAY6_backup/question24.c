// x^n without pow()

#include<stdio.h>

int main()
{
    int num,power;
    int i;
    int result=1;

    printf("Enter the number:");
    scanf("%d",&num);

    printf("Enter the power u want to assign:");
    scanf("%d",&power);

    for(i=1;i<=power;i++)
    {
        result= result*num;
    }

    printf("Answer=%d",result);

    return 0;
}