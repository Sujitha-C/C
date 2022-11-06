#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	int n;
	int i,j;
	scanf("%d",&n);
	for(i=0;i<2*n-1;i++)
	{
		for(j=0;j<2*n-1;j++)
		{
			if(i==0||j==0||i==2*n-2||j==2*n-2)
				printf("%d ",n);
			else if((!(i==0||j==0||i==2*n-2||j==2*n-2))&&(i==1||j==1||j==2*n-3||i==2*n-3))
			printf("%d ",(n-1));
			
			else
			printf(".");
		}
		printf("\n");
	}
}
