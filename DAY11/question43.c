#include<stdio.h>

void prime(int n)
{
int i,flag=0;

for(i=2;i<n;i++)
{
if(n%i==0)
{
flag=1;
break;
}
}

if(n<=1)
printf("Not Prime");
else if(flag==0)
printf("Prime");
else
printf("Not Prime");
}

int main()
{
int num;
printf("Enter a number: ");
scanf("%d",&num);
prime(num);
return 0;
}