#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i,a[100];
    float s=0,b=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            s++;
        }
        if(a[i]>0)
        {
            b++;
        }
        if(a[i]==0)
        {
            c++;
        }
    }
    printf("%f\n%f\n%f\n",(s/n),(b/n),(c/n));
}
