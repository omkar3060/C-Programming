#include<stdio.h>
#include<string.h>
main()
{
   char a[100],b[100];
   gets(a);
   gets(b);
   int i=0,p=0;
   int c,d;
   c=strlen(a);
   d=strlen(b);
  while(b[i]!='\0')
  {
   if(a[i]==b[i])
   {
       p=0;
   }
   else
   {
       p++;
       break;
   }
   i++;
  }
if(p==1)
{
    printf("not same\n");
}
else
{
    printf("same\n");
}
}
