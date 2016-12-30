#include<stdio.h>
#include<string.h>
int main()
{
char s[20];
int i,l,flag=0;
printf("enter a string:");
scanf("%s",s);
l=strlen(s);
for(i=0;i<1;i++)
{
if(s[i]!=s[l-i-1])
{
flag=1;
break;
}
}
if(flag)
{
printf("%s is not palindrome",s);
}
else
{
printf("%s is a palindrome",s);
}
return 0;
}
}