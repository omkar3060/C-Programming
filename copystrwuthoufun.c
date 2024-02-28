#include<stdio.h>
#include<string.h>
main()
{
   char a[100],b[100];
   gets(a);
   gets(b);
   int i=0;
  while(b[i]!='\0')
  {
   a[i]=b[i];
    i++;
  }
  a[i]='\0';
 puts(a);

}

