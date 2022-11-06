#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char a[100],b[100];
	int i,j,s=0;
	printf("enter the word..\n");
	gets(a);
	printf("enter the second string..\n");
    gets(b);
	for(i=0;i<strlen(a);i++)
    {
    	for(j=0;j<strlen(b);j++)
    	{
    		if(a[i]==b[j])
    		{
    			b[j]= '*';
			}
		}
	}
	 for(i=0;i<strlen(b);i++)
    {
    		if(b[i]=='*')
    		{
    			s++;
		}
    }
    	printf("%d\n",s);
          	printf("%d",strlen(a));
         if(s==strlen(a))
          {
    	    printf("yes\n");
     	}
    	else
    	{
	      printf("no\n");
	  }
     }

