#include<stdio.h>
int i,j;
main()
{
    int r,c;
    int a[20][10];
    void read(int a[20][10],int,int);
   void display(int a[20][10],int,int);
   void avg(int a[20][10],int,int);
   printf("enter rows and columns=\n");
   scanf("%d%d",&r,&c);
   if(r<=20&&c<=10)
   {
   read(a,r,c);
   display(a,r,c);
   avg(a,r,c);
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
void avg(int a[20][10],int r,int c)
{ int sum;
float avg;

    for(i=0;i<c;i++)
    { sum=0;
        for(j=0;j<r;j++)
        {
            sum=sum+a[j][i];
        }
        avg=(float)sum/r;
        printf("avg=%f\n",avg);
        avg=0.0;
    }
}
