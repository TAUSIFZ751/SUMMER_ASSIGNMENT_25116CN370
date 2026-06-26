#include<stdio.h>
#include<string.h>

int main()
{
char s[200];
int i,start=0,max=0,len=0,pos=0;

printf("Enter sentence: ");
gets(s);

for(i=0;;i++)
{

if(s[i]!=' '&&s[i]!='\0')
{
len++;
}
else{
if(len>max)
{
max=len;
pos=start;
}

len=0;
start=i+1;
}

if(s[i]=='\0')
break;
}

printf("Longest word: ");

for(i=pos;i<pos+max;i++)
printf("%c",s[i]);

return 0;
}