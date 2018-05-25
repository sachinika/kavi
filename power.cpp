#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,flag=0;
clrscr();
printf("Enter any number");
scanf("%d",&n);
while(n>1)
{
if(n%2!=0)
{
flag=1;
break;
}
n=n/2;
}
if(flag==1)
{
printf("The no. is not power of 2");
}

else
printf("The no. is power of 2");
getch();
}

