// table of a number

#include <stdio.h>

int main()
{
    int num,i,table;


    printf("ENTER THE NUMBER :");

    scanf("%d",&num);

    i=1;
      while(i<=10)

    {table=num*i;
    
    printf("%d * %d =%d\n" ,num,i,table);  
    
    
    i++;
    }

    return 0; 



}