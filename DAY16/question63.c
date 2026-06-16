#include<stdio.h>

int main()
{

int a[5]={1,4,3,2,5};
int target=7;
int flag=0;

for(int i=0;i<5;i++)
{
for(int j=i+1;j<5;j++)
{
if(a[i]+a[j]==target)
{
printf("pair is %d and %d",a[i],a[j]);
flag=1;
break;
}

}

if(flag==1){
break;
}

}
if(flag==0)
{
printf("no pair found");
}

return 0;
}