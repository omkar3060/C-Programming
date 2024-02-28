#include<stdio.h>
main()
{
    int i,j,n;
    printf("enter the number of rows=\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=i;j++)
           {
              if(j==1||i==j||i==n)
              {
                  printf("%d",j);
              }
              else
              {
                  printf(" ");
              }

           }
            printf("\n");
    }
}

