#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	int n,m;
	int i,j;
	scanf("%d%d",&n,&m);
	for(i=0;i<m;i++)
	{
	  for(j=0;j<n;j++)
	  {
	  	if(i==0||j==0||i==m-1||j==n-1)
	  	  printf("X");
	    else if((!(i==0||j==0||i==m-1||j==n-1))&&(i==1||j==1||i==m-2||j==n-2))
	    	printf("O");
	    else
	        printf("X");
	  }	
	 printf("\n");	  
	}
}
