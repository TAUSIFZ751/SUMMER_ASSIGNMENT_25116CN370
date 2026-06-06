// Count set bits in a number

#include<stdio.h>

int main()
{
int num,rem;
int count=0;

printf("Enter a number:");
scanf("%d",&num);

while(num>0)
{
rem=num%2;

if(rem==1)
{
 count++;
}

num=num/2;
}

printf("Total set bits= %d",count);

return 0;
}