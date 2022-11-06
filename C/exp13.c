#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],temp;
	int n,i,j,num,num1,sum,k;
	 gets(s);
	 n=strlen(s);
	for(i=0;i<n;i++)
	{
		num=0;
	  if(s[i]>='a' && s[i]<='z')
	  {
	  	temp=s[i];
	  }
	  if(s[i]>'0' && s[i]<='9')
	  {
	  	num=s[i]-'0';
	  	j=i+1;
	  	while(s[j]>='0' && s[j]<='9')
	  	{
	  		num1=s[j]-'0';
	  		num=num*10+num1;
	  		j++;
		  }
		  i=j-1;
	  }
	  for(k=0;k<num;k++)
	  {
	  	printf("%c",temp);
	  }
	}
}
