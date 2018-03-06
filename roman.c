#include <stdio.h>
int main(void) {
int rom[50];
int i,l,k,a[50],dec;
printf"("\n enter the roman letter");
scanf("%d",&rom);
l=strlen rom;
for(i=0;i<1;i++)
{
	switch rom[i]
	{
		case'M': return 1000;
		case'N': return 500;
		case'O': return 100;
		case'H': return 50;
		case'p': return 25;
		case'V': return 5;
		case'I': return 1;
		defalut:invalid choice;
		exit(0);
		
	}
	k = b[l - 1];
   for(i = l - 1; i > 0; i--)
   {
      if(b[i] > b[i - 1])
      {
     k = k - b[i - 1];
      }
      if(b[i] <= b[i - 1])
      {
     k = k + b[i - 1];
      }
   }
   printf("decimal equivalent is %d", k);
}
	return 0;
}
