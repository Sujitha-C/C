#include<stdio.h>
void main()
{
  char n;
 scanf("%c",&n);
 if(n==('a'|'e'|'i'|'0'|'u'|'A'|'E'|'I'|'O'|'U'))
 printf("vowels",n);
 else
 printf("consonents",n);
}
