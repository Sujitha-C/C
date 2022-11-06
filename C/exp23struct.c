#include<stdio.h>
#include<stdlib.h>
struct item
{
	int a[100];
	float b[100];
};
int main()
{
	struct item s;
	int i,j,n,menu,quantity;
	float ans;
	char ch;
	printf("enter no of item\n");
    scanf("%d",&n);
    printf("enter the index\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&s.a[i]);
	}
	printf("enter the price\n");
	for(j=0;j<n;j++)
	{
		scanf("%f",&s.b[j]);
		}	
	printf("\nitem index\tprice\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t\t%.1f\n",s.a[i],s.b[i]);
	}
	ans=0;
	ch='y';
	while(ch=='y')
	{
		printf("enter the index\n");
		scanf("%d",&menu);
		printf("enter the quantity\n");
		scanf("%d",&quantity);
		for(i=0;i<n;i++)
		{
			if(s.a[i]==menu)
			{
				ans=ans+quantity*s.b[i];
			}
		}
		printf("enter y or n\n");
	    scanf("%s",&ch);	
	}
	printf("%.1f",ans);
}
