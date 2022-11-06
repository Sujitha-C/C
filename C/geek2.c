#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,p,i,a=0,b=0;
    scanf("%d",&n);
    scanf("%d",&p);
    for(i=1;i<=p;i++)
    {
        a++;
        i=i+2;
    }
    for(i=n;i>=p;i--)
    {
        if(n%2!=0)
        {
            if(n-p==1)
                b=0;
            else
            {
                i=i-2;
                 b++;
            }
        }
        if(n%2==0)
        {
            if(n-p==1)
            {
                b=1;
            }
            else
            {
                i=i-2;
                 b++;
            }
        }
    }
    if(a<b)
    printf("%d",a);
    else
    printf("%d",b);
    return 0;
}



#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n=0,p=0,a=0,b=0;
    scanf("%d",&n);
    scanf("%d",&p);
    a=p/2;
    if(n%2==0)
    {
    	if(n-p==1)
    	{
    		b=1;
		}
		else
		{
			b=(n-p)/2;
		}
	}
    if(n%2!=0)
    {
    	if(n-p==1)
    	{
    		b=0;
		}
		else
		{
			b=(n-p)/2;
		}
	}
    if(a<b)
    printf("%d",a);
    else
    printf("%d",b);
    return 0;
}




















/*#!/bin/python3

import os
import sys

n=int(input(""))
p=int(input(""))
a=0
for i in range(1,p):
    a=a+1
    i=i+2
if n%2!0:
    b=-1
else :
    b=0
for i in range(n,p)
    i=i-2
    b=b+1
if a<b :
    print(a)
else :
    print(b)*/
    
    
    
    
    
    
    
    
    
    
    
    
    
    
  /*  a=0
    b=0
    for i in range(1,p):
        a=a+1
        i=i+2
    for i in range(n,p,-1):
        if p%2!=0 :
            if p==n-1 :
                b=0
                return b
        else :
            b=b+1
            i=i-2
    if a<b :
        return a
    else :
        return b*/
    
