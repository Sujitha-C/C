#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,a[10000];
    int big=0,b=0,i;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++)
    {
       scanf("%d ",&a[i]);
        if(big<a[i])
        {
            big=a[i];
        }
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==big)
            b++;
    }
    printf("%d",b);
    return 0;
}
