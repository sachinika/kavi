#include <stdio.h>
int main() 
{
    int lh;
    scanf("%d",&l);
  int a[lh],i,j=0;
  for(i=0;i<lh;i++)
  scanf("%d",&a[i]);
    for(i=0;i<lh;i++)
    {
      if(a[j]==a[i+1])
         {
           printf("\n%d",a[j]);
           for(j=i+1;j<lh;j++)
           {
           a[j]=a[j+1];
           a[l]='\0';
           lh--;
                  }
         j++;
         }
         }
	return 0;
}
