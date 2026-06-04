//  nth term of fibonacci series 

#include<stdio.h>
int main()
{
    int a,b,c,count,num;

    //  printf("enter the upper limit of fibonacci series=");
    //  scanf("%d",&uppernum);
    
    printf("enter the term u want= ");
    scanf("%d",&num);
    a=0;
    b=1;
    
       if(num == 1)
        printf("Your required term = %d", a);
        
      else if(num == 2)
        printf("Your required term = %d", b);

      else
  {
    count=3;
    while(count<=num)
    {
      c=a+b;
      a=b;
      b=c;
        
      count++;
    }
  
    printf("your required term=%d",c);
  }

    return 0;
    

}