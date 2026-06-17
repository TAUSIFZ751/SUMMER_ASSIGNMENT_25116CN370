#include<stdio.h>

int main()
{
int n1,n2,i,j,found;

scanf("%d",&n1);
int a[n1];

for(i=0;i<n1;i++)
scanf("%d",&a[i]);

scanf("%d",&n2);
int b[n2],u[n1+n2],k=0;

for(i=0;i<n2;i++)
scanf("%d",&b[i]);

for(i=0;i<n1;i++)
u[k++]=a[i];

for(i=0;i<n2;i++)
{
found=0;

for(j=0;j<k;j++)
{
if(b[i]==u[j])
{
found=1;
break;
}
}

if(found==0)
u[k++]=b[i];
}

for(i=0;i<k;i++)
printf("%d ",u[i]);

return 0;
}