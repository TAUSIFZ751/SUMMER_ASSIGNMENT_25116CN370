// recursive sum of digit

#include<stdio.h>

int sumdigit(int n)
{
if(n==0)
{
return 0;
}
return (n%10)+sumdigit(n/10);
}

int main()
{
    int num;

    printf("Enter a number:");
    scanf("%d",&num);

    printf("Sum of digits=%d",sumdigit(num));

    return 0;
}