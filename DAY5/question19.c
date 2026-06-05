// factors of a number

#include<stdio.h>
int main()
{
    int num,i;

    printf("enter the number=");
    scanf("%d",&num);

        for(i=1;i<=num/2;i++)
        {
            if(num%i==0)
            printf("%d is the factor of the %d\n",i,num);



        }

        return 0;
}