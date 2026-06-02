// reverse of a number
 
#include <stdio.h>
int main()
{ 
    int num,reverse,remainder;
     printf("enter a positive number: ");
    scanf("%d",&num);

    reverse=0;
    
    while(num>0)
    { 
        remainder=num%10;
        reverse=reverse*10+remainder;
        num=num/10;

    } 
    printf("the reverse of the number =%d",reverse);
    return 0;
    
}