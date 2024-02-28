#include<stdio.h>
int i,j;
main()
{
    int r,c;
    int a[20][10],b[20][10];
    void read(int a[20][10],int);
    void display(int a[20][10],int);
    void sum(int a[][10],int b[][10],int);
    scanf("%d",&r);
    read(a,r);
    read(b,r);
    display(a,r);
    display(b,r);
    sum(a,b,r);
}
void read(int a[20][10],int r)
{
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void display(int a[20][10],int r)
{
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d  ",a[i][j]);
        }
    }
    printf("\n");
}
 void sum(int a[][10],int b[][10],int r)
 { int c[10][10];
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
           c[i][j]=a[i][j]+b[i][j];
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }
 }
