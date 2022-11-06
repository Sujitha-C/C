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
    int a[27],i,j,c=0,ans,height=0;
    char word[11];
    for(i=0;i<27;i++)
    {
        scanf("%d",&a[i]);
    }
    gets(word);
    for(i=0;i<strlen(word);i++)
    {
        for(j=0;j<11;j++)
        {
            if(a[word[i]-'a']>height)
            {
                height=a[word[i]-'a'];
            }
        }
    }
    ans=strlen(word)*1*height;
    printf("%d\n",ans);
    return 0;
}
