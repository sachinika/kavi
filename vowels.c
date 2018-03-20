#include <stdio.h>
int main()
{
char st[20],ch;
  int  i,l;
  clrscr();
  printf("Enter the string :-> ");
  gets(st);
  l=strlen(st);
  printf("Original String :-> %s\n",st);
  for(i=0;i<l/2;i++)
  {
   ch=st[i];
   st[i]= st[l-1-i];
   st[l-1-i]=ch;
  }
  printf("Reverse String is :-> %s\n",st);
  }
int isVowel(char c)
{
    switch(c) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            return 1;
            default:
            return 0;
    }
}
int main(){
 char *str;
  int i = 0;
  int j = 0;
  str = malloc(sizeof(char) * 256);
  printf("Enter a string : ");
  scanf("%[^\n]s",str);
  for(i=0 ;str[i] !='\0' ;i++ ){
  if(isVowel(str[i]) == 0){
           str[j] = str[i];
        j++;
    }
  }
  str[j] = '\0';
   printf("%s\n",str);
    
}
	return 0;
}
