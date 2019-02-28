#include <stdio.h>

void main 
{
	int num,i,j,f=1;
	scanf("%d",&num);
	for(j=2;j<=num;j++)
	{
		if(num%j==0)
		{
			f=1;
			for(i=2;i<=j/2;i++)
			{
			if(j%i==0)
			{
			f=0;
			break;
			}
			}
		
	
	if(f==1)
	{
		printf("%d ",j);
	}
		}
	}

}
