#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,s[100],a[100],k,i,j,temp,ans,c,p;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	p=1;
    for(i=0;i<n;i++)
    {
    	p=p*s[i];   	
	}
	for(i=0;i<n;i++)
	{
	  for(j=1;j<n;j++)
	  {
	  	if(s[i]<s[j])
	  	{
	  		temp=s[i];
	  		s[i]=s[j];
	  		s[j]=temp;
		  }
	  }
	}
	for(i=temp;i<p;i++)
	{
		c=0;
		for(j=0;j<n;j++)
		{
			if(i%s[j]==0)
			{
				ans=i;
				c++;
			}
		}
		if(c==n)
		{
			break;
		}
	}
    if(c==n)
    {
    	printf("the LCM is %d",ans);
	}
}
