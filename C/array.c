#include<stdio.h>
int main()
{
	int a[100],b[100],c[100],n,i;
	scanf("%d",&n);
	printf("enter array...\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("odd array...\n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2!=0)
		{
			b[i]=a[i];
			printf("%d",b[i]);
		}
	}
	printf("\neven array...\n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			c[i]=a[i];
			printf("%d",c[i]);
		}
	}
}
