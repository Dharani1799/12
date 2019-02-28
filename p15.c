#include <stdio.h>
#include<string.h>
void main()
{
    char a[10],x;
    int i,j,n,max=0,c=0;
    scanf("%[^\t\n]s",a);
    n=strlen(a);
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
        if(count>=max)
        {
            max=c;
            x=a[i];
        }
    }
    printf("%c-%d",x,max);
    
}
