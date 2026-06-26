#include<stdio.h>
#include<string.h>

int main()
{
char s[100];
int i,count;

printf("Enter string: ");
gets(s);

for(i=0;s[i]!='\0';i++)
{
count=1;

while(s[i]==s[i+1])
{
count++;
i++;
}

printf("%c%d",s[i],count);
}

return 0;
}