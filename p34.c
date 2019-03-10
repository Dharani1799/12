#include <stdio.h>
#include<string.h>
void main() 
{
	char a[20];
	int c,i;
	scanf("%s",a);
	c=strlen(a);
	printf("%c",a[0]);
	for(i=0;i<c;i+=3)
	{
	   printf("%c",a[i+3]);
	}
}
