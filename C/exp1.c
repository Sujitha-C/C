#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
   char s[100];
   int i,c;
   c=0;
   gets(s);
   for(i=0;i<strlen(s);i++)
   {
   	if(s[i]=='@')
   	{
   		break;
	   }
	   c++;
	   printf("%c",s[i]);
	   }
	   printf("%d",c);	
}
