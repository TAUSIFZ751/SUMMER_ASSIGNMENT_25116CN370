//gcd

#include<stdio.h>
int main()
{
    int num1,num2,gcd,i;

    printf("enter the first number=");
    scanf("%d",&num1);

    printf("enter the second number=");
    scanf("%d",&num2);

    i=1;
    while(i<=num1 && i<=num2)
    { 
        if(num1%i==0 &&num2%i==0)
        gcd=i;
        i++;
    }
    printf("GCD=%d",gcd);

    return 0;



}