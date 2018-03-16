#include<stdio.h>
int main
{
char a[100],b[100];
printf("\n enter the character if its check the palindrome or not"0;
gets(a)
strcpy(b,a)
strrev(a)
if(strcmp(a,b)=0)
{
printf("\n palindrome");
else
printf('\n not a palindrome");
}
return 0;
}
