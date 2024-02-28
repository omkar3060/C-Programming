#include<stdio.h>
main()
{
    char str[100],temp;
    printf("read the string\n");
    int i,j=0;
    gets(str);
    puts(str);
    j=strlen(str)-1;
    while(i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
          j--;

            }
            puts(str);
    }

