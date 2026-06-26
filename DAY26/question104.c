#include<stdio.h>

int main()
{
int score=0,ans;

printf("Q1. Capital of India?\n");
printf("1.Delhi\n2.Mumbai\n3.Kolkata\n");
scanf("%d",&ans);

if(ans==1)
score++;

printf("Q2. 5+5=?\n");
printf("1.8\n2.10\n3.12\n");
scanf("%d",&ans);

if(ans==2)
score++;

printf("Q3. C language created by?\n");
printf("1.Dennis Ritchie\n2.James Gosling\n3.Guido\n");
scanf("%d",&ans);

if(ans==1)
score++;

printf("Score=%d/3",score);

return 0;
}