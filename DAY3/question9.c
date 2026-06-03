// prime number or not


#include <stdio.h>
int main()
{
    int num,i,num2,num3;

    printf("enter the number:");
    scanf("%d",&num);
    
    num2=num/2;
    i=2; 

    if(num==1)
    printf("it is not a prime number ");

    else if (num<=0)
    printf("it is not a prime number ");

    else
    {
        while(i<=num2)
        {
         num3=num%i;
         i++;
        }
    if(num3==0)
    printf("it is not a prime number");

    else
    printf("it is a prime number");

    }
return 0;
}