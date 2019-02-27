#include <stdio.h>
void main()
{
    int a[100],b[100],c[100],i;
    for(i=0;i<2;i++)
    {
        scanf("%d%d%d",&a[i],&b[i],&c[i]);
        if(a[0]==b[0]==c[0])
        {
            printf("yes");
        }
        else if(a[1]==b[1]==c[1])
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
}    
