#include <stdio.h>
void main()
{
	int a[10],x;
    int n,i,j,max=99,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=1;
        if(a[i]=='+')
        {
            continue;
        }
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                a[j]='+';
            }
        }
        if(c<=max)
        {
            max=c;
            x=a[i];
        }
    }
    printf("%d",x);
    }
