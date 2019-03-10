#include<stdio.h>
#include<string.h>

int main() {
 char a[100];
 int n,c=0,d,i,j;
 gets(a);
n=strlen(a);
for(i=0;i<n;i++)
{
    c=0;
    for(j=i+1;j<n;j++)
    {
        if(a[i]==a[j])
        {
            a[j]='\0';
            c=1;
        }
    }
    if(c==1)
    a[i]='\0';
}
for(i=0;i<n;i++)
{
    if(a[i]!='\0')
    printf("%c",a[i]);
}
}
