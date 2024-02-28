#include<stdio.h>
int i,j,r1,c1,r2,c2;
main()
{
    int a[10][20],b[10][20];
    void read_array(int [][20],int [][20],int ,int,int,int);
    void display_array(int [][20],int [][20],int ,int,int,int);
    void multiply_array(int [][20],int [][20],int ,int,int,int);
    printf("enter the row=\n");
    scanf("%d",&r1);
    printf("enter the column=\n");
    scanf("%d",&c1);
    printf("enter the row=\n");
    scanf("%d",&r2);
    printf("enter the column=\n");
    scanf("%d",&c2);
    if(c1==r2)
    {
    read_array(a,b,r1,c1,r2,c2);
    display_array(a,b,r1,c1,r2,c2);
    multiply_array(a,b,r1,c1,r2,c2);
    }
    else
    {
        printf("invalid rows or column\n");
    }
}
void read_array(int a[10][20],int b[10][20],int r1,int c1,int r2,int c2)
{
    printf("enter the elements=\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d ",&a[i][j]);
        }
    }
   printf("enter the elements=\n");
     for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d ",&b[i][j]);
        }
    }
}
void display_array(int a[10][20],int b[10][20],int r1,int c1,int r2,int c2)
{
    printf("elements are=\n");

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
     printf("elements are=\n");

     for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}
void multiply_array(int a[10][20],int b[10][20],int r1,int c1,int r2,int c2)
{
    int k,result[i][j];
    if(r1==c2)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                 int sum=0;
                for(k=0;k<r1;k++)
                {
                    sum=sum+a[i][k]*b[k][j];
                }
                result[i][j]=sum;
            }
        }
        printf("\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d\t",result[i][j]);
            }
            printf("\n");
        }

    }
    else
    {
        printf("multiplication is not possible\n");
    }
}
