#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[100],b[100],n,i,j,temp,c[100],m,k,l;
	scanf("%d",&n);
	printf("\n first array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	printf("\n second array\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	k=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{	
		   temp=a[j];
		   if(b[i]==a[j])
		   {
		   	    a[j]=a[k];
		   	    a[k]=temp;
		   	    k++;
		   }
		}
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
