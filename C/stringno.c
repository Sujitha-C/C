#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i,j,num1,num2,sum;
	char s[100];
	sum=0;
	gets(s);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
				num1=s[i]-'0';
				j=i+1;
				while(s[j]>='0' && s[j]<='9')
				{
						num2=s[j]-'0';
						num1=num1*10+ num2;
						j++;
				}
					sum=sum+num1;
				i=j;	
		}
			
	}
	printf("%d",sum);
}
