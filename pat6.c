#include<stdio.h>
main()
{
    int i,j;
    char k;
    k='A';
    for(i=1;i<=4;i++)
    {

        for(j=1;j<=i;j++)
            {printf("%c",k);
            k++;
            }

            printf("\n");
    }
}
