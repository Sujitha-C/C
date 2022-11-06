#include<stdio.h>
#include<stdio.h>
int main()
{
	int s[100],j,i,n,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i%2 == 0)
		{
			if(s[i]>s[i+1])
			{
				temp=s[i];
				s[i]=s[i+1];
				s[i+1]=temp;
			}
		}
		else if(i%2 != 0)
		{
			if(s[i]<s[i+1])
			{
				temp=s[i];
				s[i]=s[i+1];
				s[i+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",s[i]);
	}
}
