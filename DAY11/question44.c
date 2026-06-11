#include<stdio.h>

int factorial(int n)
{
int i,fact=1;

for(i=1;i<=n;i++)
{
fact=fact*i;
}

return fact;
}

int main()
{
int num,ans;
printf("Enter a number: ");
scanf("%d",&num);
ans=factorial(num);
printf("Factorial=%d",ans);
return 0;
}