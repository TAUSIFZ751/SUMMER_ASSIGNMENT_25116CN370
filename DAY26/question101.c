#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
int num,guess;

srand(time(0));
num=rand()%100+1;

do{
printf("Guess number(1-100): ");
scanf("%d",&guess);

if(guess>num)
printf("Too high\n");

else if(guess<num)
printf("Too low\n");

else
printf("Correct guess");

}while(guess!=num);

return 0;
}