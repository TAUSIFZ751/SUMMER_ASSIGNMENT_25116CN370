#include<stdio.h>

int main()
{
int a[6]={1,2,2,3,4,4};
int b[6];
int size=0;

for(int i=0;i<6;i++)
{
int duplicate=0;

for(int j=0;j<size;j++)
{
if(a[i]==b[j])
{
duplicate=1;
break;
}

}
if(duplicate==0)
{
b[size]=a[i];
size++;
}

}
printf("new array is ");
for(int i=0;i<size;i++)
{
printf("%d ",b[i]);
}
return 0;
}