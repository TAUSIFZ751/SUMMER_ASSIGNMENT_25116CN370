#include <stdio.h>

int main()

{
int n=5;
int a[4]={1,2,4,5};
int totalsum=(n*(n+1))/2;
int arraysum=0;

for(int i=0;i<4;i++)
{
arraysum=arraysum+a[i];
}

int missing=totalsum-arraysum;

printf("Missing number is: %d",missing);

return 0;
}