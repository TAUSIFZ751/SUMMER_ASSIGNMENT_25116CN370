// sum of digit of a number 

#include <stdio.h>
int main()
{
    int sum,remainder,num;

    printf("Enter a positive number :");
    scanf("%d",&num);

    sum=0;
    while(num>0)
    {
        remainder=num%10;
        sum=sum+remainder;

        num=num/10;

    }
      printf("The sum of the digits of the number =%d",sum);

    return 0;
}
