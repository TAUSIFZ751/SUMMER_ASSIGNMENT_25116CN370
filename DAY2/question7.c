// product of digit of number
 

#include <stdio.h>
int main()
{
    int product,remainder,num;

    printf("Enter a positive number :");
    scanf("%d",&num);

    product=1;
    while(num>0)
    {
        remainder=num%10;
        product=product*remainder;

        num=num/10;

    }
    printf("The product of the digits of the number =%d",product);

    return 0;
}
