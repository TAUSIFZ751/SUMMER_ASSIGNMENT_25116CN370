#include<stdio.h>

int main(){
    int a[100];
    int n,i,sum=0;

    printf("Enter size: ");
    scanf("%d",&n);

    printf("Enter elements:\n");

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
        sum=sum+a[i];

    printf("Sum = %d",sum);

    return 0;
}