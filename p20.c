#include<stdio.h>
#include<string.h>
void main() 
{
    char a[10];
    int i,n;
	scanf("%s",a);
	d=strlen(a);
	for(i=0;i<d;i++)
	{
	    if(a[i]=='X')
	    {
	        a[i]='A';
	    }
	    else if(a[i]=='Y')
	    {
	        a[i]='B';
	    }
	    else if(a[i]=='Z')
	    {
	        a[i]='C';
	    }
	    else
	    {
	         a[i]=a[i]+3;  
	    }
	}
	printf("%s",a);  
}
