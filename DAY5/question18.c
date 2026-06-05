// strong number

#include<stdio.h>

int main()
{
    int num,fact,temp,i,temp1,sum;

    printf("enter the number=");
    scanf("%d",&num);
    
    temp=num;
     
    sum=0;

    

    while(temp>0)
    {
      temp1=temp%10;

      i=1;
      fact=1;
      
             if(temp1==0)
             {
                fact=1;
             }

            else
            { 

            while(i<=temp1)
            {
              
                fact=fact*i;
                i++;

            }
           
           }

           sum=sum+fact;
           temp=temp/10;


    }

    if(sum==num)
    printf("%d is a strong number",num);

    else
    printf("%d is not a strong number",num);



    return 0;

}