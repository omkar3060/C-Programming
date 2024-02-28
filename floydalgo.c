#include<stdio.h>
#include<limits.h>
int min(int a,int b)
{
    if(a>=b)
        return b;
    return a;
}
int main()
{
    int d[4][4]={{0,INT_MAX/2,3,INT_MAX/2},
                 {2,0,INT_MAX/2,INT_MAX/2},
                 {INT_MAX/2,7,0,1},
                 {6,INT_MAX/2,INT_MAX/2,0}};
   int i,j,k,n=4;
   for(k=0;k<n;k++)
   {
       for(i=0;i<n;i++)
       {
           for(j=0;j<n;j++)
           {
               d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
           }
       }
   }
   printf("Using Floyd's Algorithm\n");
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
        printf("%d ",d[i][j]);
       printf("\n");
   }
}
