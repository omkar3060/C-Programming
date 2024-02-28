#include<stdio.h>
int i,j;
main()
{
    int r,c;
    int a[20][10];
    void read(int a[20][10],int,int);
   void display(int a[20][10],int,int);
   void max(int a[20][10],int,int);
   printf("enter rows and columns=\n");
   scanf("%d%d",&r,&c);
   if(r<=20&&c<=10)
   {
   read(a,r,c);
   display(a,r,c);
   max(a,r,c);
   }
   else
   {
       printf("invalid\n");
   }

}
void read(int a[20][10],int r,int c)
{
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
}
void display(int a[20][10],int r,int c)
{
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
}
void max(int a[20][10],int r,int c)
{
    for(i=0;i<r;i++)
    {int max=a[0][0];
        for(j=0;j<c;j++)
        {
          if(a[i][j]>max)
            max=a[i][j];

        }
         printf("%d\n",max);
    }
}
