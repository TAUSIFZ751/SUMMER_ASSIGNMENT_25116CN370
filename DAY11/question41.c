#include<stdio.h>

int sum(int a,int b)
{
return a+b;
}

int main()
{
    int n1,n2,ans;

    printf("Enter two numbers: ");
    scanf("%d%d",&n1,&n2);

    ans=sum(n1,n2);

    printf("Sum=%d",ans);
    
    return 0;
}