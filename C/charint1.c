#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,k;
	int b[100];
  char s[100],a[100];
  gets(s);
  for(i=0;i<strlen(s);i++)
  {
  	printf("%c",s[i]);
  }
  printf("\n");
  for(i=0;i<strlen(s);i++)
  {
  	if(s[i]>='a'||'A' && s[i]<='z'||'Z')
  	{
  		a[i]=s[i];
  		printf("%c",a[i]);
	  }
  }
	   printf("\n");
}
