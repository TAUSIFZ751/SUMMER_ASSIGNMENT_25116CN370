#include<stdio.h>
#include<string.h>

int main()
{
char s[100];
int i,j,count,max=0;
char ch;

printf("Enter string: ");
gets(s);

for(i=0;s[i]!='\0';i++)
{
count=0;

for(j=0;s[j]!='\0';j++)
{
if(s[i]==s[j])
count++;
}

if(count>max)
{
max=count;
ch=s[i];
}
}

printf("Maximum occurring character=%c",ch);

return 0;
}