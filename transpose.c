#include<stdio.h>
int i,j;
main()
{
    int r,c;
    int a[20][10];
    void read(int a[20][10],int);
    void display(int a[20][10],int);
    void trans(int a[20][10],int);
    scanf("%d",&r);
    read(a,r);
    display(a,r);
    trans(a,r);
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
        printf("\n");
    }
}
void trans(int a[20][10],int r)
{
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
               printf("%d  ",a[j][i]);
        }
        printf("\n");
    }
}

