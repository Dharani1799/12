#include <stdio.h>
#include<string.h>
void main()
{
    char a[10];
    int i,d;
    scanf("%s",a);
    d=strlen(a);
    for(i=d-1;i>=0;i--)
    {
        if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
        {
            continue;
        }
        else
        {
            printf("%c",a[i]);
        }
    }
