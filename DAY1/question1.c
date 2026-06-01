// sum of n natural numbers
#include <stdio.h>

int main()
{
 int num,sum,i;

printf("ENTER THE NATURAL NUMBER :");
scanf("%d",&num);
i=1;
sum=0;
while(i<=num)
{
    sum=sum+i;
    i++;    }

printf("THE SUM OF FIRST %d NUMBER IS :%d",num,sum);

return 0;
}








