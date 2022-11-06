#include<stdio.h>
void main()
{
	int a[10][10],i,j,m,n,sum1=0,sum2=0,p,q;
	printf("enter the rows and columns..");
	scanf("%d%d",&m,&n);
	printf("enter the matrix");
	for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
	}
	}
	for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
	{
		printf("%d\t",a[i][j]);
	}
	printf("\n");
	}
	for(i=0;i<m+1;i++)
	{
				sum1+=a[i][i];
	}
	printf("sum1=%d\n",sum1);
	for(i=0,j=n;i<m;i++,j--)
	{
		   sum2+=a[i][j];
	}
	printf("sum2=%d\n",sum2);
	if(sum1>sum2)
	 printf("%d",sum1-sum2);
	else
	printf("%d",sum2-sum1);
}
