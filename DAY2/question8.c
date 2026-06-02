// palindrome number

#include <stdio.h>
int main()
{ 
    int num,num2,reverse,remainder;
     printf("enter a positive number: ");
    scanf("%d",&num);

    reverse=0;
    num2=num;

    while(num2>0)
    { 
        remainder=num2%10;
        reverse=reverse*10+remainder;
        num2=num2/10;

    }   
    
    if(num==reverse)
    {
        printf("The number is a palindrome");
    
    }
    else
    printf("The number is not a palindrome");
    
    return 0;
    
}