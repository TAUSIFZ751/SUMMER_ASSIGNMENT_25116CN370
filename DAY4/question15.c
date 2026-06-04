//armstrong number

#include<stdio.h>
#include<math.h>
int main()
{
    int num,temp1,temp2,sum,a,count;
    
 

     printf("enter the number:");
     scanf("%d",&num);
     temp1=num;
     temp2=num;
     count=0;
      while(num>0)
      { num=num/10;
     count++;
      }
    
    sum=0;
    while(temp2>0)
    {
        a=temp2%10;
        sum=sum+pow(a,count);

        temp2=temp2/10;
    

    }
   if(sum==temp1)
   printf("it is a armstrong number");

   else
   printf("it is not a armstrong number");

   return 0;
}