#include <stdio.h>
void main()
{
	int n,d,n1,i;
	scanf("%d %d",&n,&d);
	if(n>d)
	{
	    n1=n;
	}
	else
	{
	    n1=d;
	}
    for(i=n1;i>=2;i--)
    {
        if(n%i==0 && d%i==0)
        {
            printf("%d",i);
            break;
        }
    }

}
