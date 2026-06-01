// facrorial of a number


#include<stdio.h>
int main()
{

 int fact,num,i;

printf("Enter a positive integer:");
scanf("%d",&num);

fact=1;
i=1;

if(num==0)
{
    printf("The factorial of the number =1");
}

else if(num<0)
{printf("Enter a positive integer");}

else
{  while(i<=num)

{
    fact=fact*i;
 i++;
}


printf("The factorial of the number  =%d",fact);
}

return 0; }
