// convert decimal to binary

#include<stdio.h>
int main()
{
int num,rem,arr[50],i=0,j;

printf("Enter a decimal number:");
scanf("%d",&num);

while(num>0)
{
rem=num%2;
arr[i]=rem;
i++;
num=num/2;
}
printf("Binary number=");

for(j=i-1;j>=0;j--)
{
printf("%d",arr[j]);
}

return 0;
}