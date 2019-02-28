#include <stdio.h>
#include<string.h>
void main() {
	char a[10];
	int c=0,i,n;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	    if(a[i]>='0'&&a[i]<='9')
	    {
	        c=0;
	    }
	    else
	    {
	        c++;
	    }
	}
	if(c==0)
	{
	    printf("yes");
	}
	else
	{
	    printf("no");
	}

}
