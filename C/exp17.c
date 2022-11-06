#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s1[100],s2[100],i,j,m,n,c,a[100];
	scanf("%d%d",&m,&n);
	printf("first array..\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&s1[i]);
	}
	printf("second array..\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&s2[i]);
		a[i]=-1;
	}
	printf("first array..");
	for(i=0;i<m;i++)
	{
		printf("%d ",s1[i]);
	}
	printf("\n");
	printf("second array...");
	for(i=0;i<n;i++)
	{
		printf("%d ",s2[i]);
	}
	printf("\n");
	printf("Intersection..");
	for(i=0;i<m;i++)
	{	
		j=0;
       for(j=0;j<n;j++)
       {
       	    if((s1[i]==s2[j]) && (a[j]!=0) ==1)
       	    {
       	    	a[j]=0;
       	  	    printf("%d ",s1[i]);
       	  	    break;
		    }
	   }
	}
	printf("\n");
	printf("Union..");
		for(i=0;i<m;i++)
		{
			printf("%d ",s1[i]);
		}
		for(j=0;j<n;j++)
		{
			if(a[j]!=0)
			{
				printf("%d ",s2[j]);
			}
		}
		printf("\n");
		printf("Except..");
		for(i=0;i<n;i++)
		{
			if(s1[i]%2!=0)
			{
				printf("%d ",s1[i]);
			}
		}
		for(j=0;j<n;j++)
		{
			if(s2[j]%2==0)
			{
				printf("%d ",s2[j]);
			}
		}
}
