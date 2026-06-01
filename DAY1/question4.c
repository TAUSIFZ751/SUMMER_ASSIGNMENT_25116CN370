// to count the no. of digits 

#include <stdio.h>

int main()
{
    int num, count;

     printf("enter the number:");
     scanf("%d",&num);

     count=0;
      while(num>0)
      { num=num/10;
     count++;
      }
    printf("the number of digit =%d",count);

return 0;
}


