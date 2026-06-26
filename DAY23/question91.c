#include<stdio.h>
#include<string.h>

int main(){
char s1[100],s2[100];
int i,j,len1,len2,found;

printf("Enter first string: ");
gets(s1);

printf("Enter second string: ");
gets(s2);

len1=strlen(s1);
len2=strlen(s2);

if(len1!=len2){
printf("Not anagram");
return 0;
}

for(i=0;i<len1;i++)
{
found=0;

for(j=0;j<len2;j++)
{
if(s1[i]==s2[j]){
s2[j]='*';
found=1;
break;
}
}

if(found==0)
{
printf("Not anagram");
return 0;
}
}

printf("Anagram");
return 0;
}