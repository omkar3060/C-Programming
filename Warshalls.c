#include<stdio.h>
int main()
{
    int d[4][4]={{1,1,0,1},
                 {0,1,1,0},
                 {0,0,1,1},
                 {0,0,0,1}};

   int i,j,k,n=4;
   for(k=0;k<n;k++)
   {
       for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
               d[i][j]=(d[i][j]==1)||(d[i][k]==1&&d[k][j]==1);
           }
       }
   }
   printf("Using Warshall's Algorithm\n");
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
        printf("%d ",d[i][j]);
       printf("\n");
   }
}

