// perfect number

#include<stdio.h>
int main()
{
    int num,temp,i,sum;

    printf("enter the number u want to check:");
    scanf("%d",&num);

    temp=num;

    num=num/2;
    
    i=1;
    sum=0;

    while(i<=num)
    {
        if(temp%i==0)
        {
            sum=sum+i;

        }
        i++;
    }
    
    if(sum==temp)
    printf("%d is a perfect number",temp);

    else
    printf("%d is not a perfect number",temp);

    return 0;
    



}