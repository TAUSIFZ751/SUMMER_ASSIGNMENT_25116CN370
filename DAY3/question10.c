// prime number in a range 
 
#include <stdio.h>
int main()
{
     int num,numl,numu,i,num2,num3;

    printf("enter the lower limit :");
    scanf("%d",&numl);

    printf("enter the upper limit :");
    scanf("%d",&numu);
    
    for(num=numl; num<=numu;num++)
    {
    i=2; 
    num2=num/2;

    if(num==1)
    printf("%d is not a prime number\n ",num);

    else if (num<=0)
    printf("%d is not a prime number\n ",num);

    else
    {
        while(i<=num2)
        {
         num3=num%i;
         i++;
        }
    if(num3==0)
    printf("%d is not a prime number\n",num);

    else
    printf("%d is a prime number\n",num);

    }
}
return 0;
}
