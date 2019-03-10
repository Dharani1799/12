#include <stdio.h>
#include<string.h>
void main()
{
   char s[100];
   int i,c,f=0;
   gets(s);
   l=strlen(s);
   for(i=0;i<c;i++)
   {
       if(s[i]==' ')
       {
           c--;
       s[i]=s[i+1];
       printf("%s",s);
       
       }
   }
}
