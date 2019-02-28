#include <stdio.h>
#include<string.h>
void main()
{
   char str[50][50],t[50];
   int d;
   scanf("%d",&d);
   for(int i=0;i<d;i++)
   {
       scanf("%s",str[i]);
   }
   for(int i=0;i<d;i++)
   {
       for(int j=i+1;j<d;j++)
       {
           if(strcmp(str[i],str[j])>0)
           {
               strcpy(t,str[i]);
               strcpy(str[i],str[j]);
               strcpy(str[j],t);
             
               
           }
       }
   }
   for(int i=0;i<d;i++)
   {
       printf("\n%s",str[i]);
   }

}
