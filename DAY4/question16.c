// armstrong in a range

#include<stdio.h>
#include<math.h>
int main()
{
    int num,temp1,temp2,temp3,sum,a,count,uppernum,lowernum;
    
    printf("enter the lower limit=");
    scanf("%d",&lowernum);

    printf("enter the upper limit=");
    scanf("%d",&uppernum);
    
    

     num=lowernum;
    
   while(num<=uppernum)
     
  {
      temp1=num;
      temp2=num;
      temp3=num; 
      
      if(temp3 == 0)
   {
    count = 1;
   
   }
   else
   {   count=0;
       while(temp3>0)
      { 
       
          temp3=temp3/10;
       count++;
      }
   }
    sum=0;

    while(temp2>0)
      {
        a=temp2%10;
        sum=sum+pow(a,count);

        temp2=temp2/10;
      }

   if(sum==temp1)
      {
         printf(" %d is a armstrong number\n",temp1);
      }
   
       // else
       // printf("it is not a armstrong number");

       
       num++;
 
   }


   return 0;
}