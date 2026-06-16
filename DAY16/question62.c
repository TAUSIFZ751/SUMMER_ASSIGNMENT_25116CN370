#include <stdio.h>

int main()
{

int a[7]={1,3,2,3,4,3,2};
int n=7;
int maxcount=0;
int ans=a[0];

for(int i=0;i<n;i++)
{
int count=0;

for(int j=0;j<n;j++)
{
if(a[i]==a[j])
{
count++;
}

}

if(count>maxcount)
{
maxcount=count;
ans=a[i];
}

}

printf("Element with max frequency: %d",ans);

return 0;
}