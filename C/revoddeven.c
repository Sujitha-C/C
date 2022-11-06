#include<stdio.h>
#include<stdlib.h>
#include<string.h>
	int n,a[100],i,j,b[100],temp=0,c[100];
	void oddeven(int a[],int n);
void main()
{

	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
     	scanf("%d",&a[i]);
    }
   	printf("\n");
   	for(i=0;i<n;i++)
   	{
   		for(j=0;j<n-i-1;j++)
   		{
   			if(a[j]<a[j+1])
   			{
   			temp=a[j];
   			a[j]=a[j+1];
   			a[j+1]=temp;
   		}
		   }
	   }
    oddeven(a,n);
}
void oddeven(int a[],int n)
{
	for(i=0;i<n;i++)
    {
    	if(a[i]%2!=0)
    	{
    		c[i]=a[i];
			printf("%d,",c[i]);
		}
	}
	for(i=0;i<n;i++)
    {
    	if(a[i]%2==0)
    	{
    		b[i]=a[i];
			printf("%d,",b[i]);
    	}
	}	
}
