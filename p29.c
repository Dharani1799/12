#include <stdio.h>
void main()
{
	int l,r,i,n,c=0;
	scanf("%d %d",&l,&r);
	for(i=l;i<=r;i++)
	{
	   n=i*i;
	   if(n<=r)
	   {
	       c++;
	   }
	}
	printf("%d",c);
}
