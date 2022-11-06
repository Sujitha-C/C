#include<stdio.h>
struct parking{
	int car[10];
	int id;
}c;
void park()
{
	int i,no;
	scanf("%d",&no);
	for(i=0;i<10;i++)
	{
		if(c.car[i]==0)
		{
			c.car[i]=no;
			break;
		}
	}
}
int main()
{
	int a,i,n;
	printf("enter the car id...");
	scanf("%d",&c.id);
	printf("0.park\n1.unpark\n2.view\n");
	scanf("%d",&n);
	while(1)
	{
	switch(n)
	{
		case 0:
			park();
			break;
		case 1:
			printf("to unpark car...");
			scanf("%d",&a);
			for(i=0;i<10;i++)
			{
				if(c.car[i]==1)
				{
					printf("%d can be unparked",i);
					c.car[i]=0;
					break;
				}
				else
				  printf("invalid user input\n");
			}
			break;
		case 2:
			for(i=0;i<10;i++)
			{
	         	printf("%d",c.car[i]);
	    	}
	    	break;
	}
 }
}
