// fibonacci series 

#include<stdio.h>
int main()
{
    int a,b,c,uppernum;

    printf("enter the upper limit of fibonacci series=");
    scanf("%d",&uppernum);

    a=0;
    b=1;
    printf("%d\n",a);
    printf("%d\n",b);
     
    c=a+b;

    while(c<=uppernum)
    {
      printf("%d\n",c);
      a=b;
      b=c;
      c=a+b;  

    }
    
    return 0;
    

}