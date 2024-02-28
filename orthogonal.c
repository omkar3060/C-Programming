#include<stdio.h>
int i,j,r,c;
main()
{
    int r,c;
    int a[20][10];
    void read(int a[20][10],int,int);
    void display(int a[20][10],int,int);
    printf("Enter the no of rows\n");
    scanf("%d%d",&r,&c);
    read(a,r,c);
    display(a,r,c);
}
void read(int a[20][10],int r,int c)
{
    printf("Enter the elements=\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
void display(int a[20][10],int r,int c)
{
    int found=0;
    int b[20][10],k,result[20][10];
    for(i=0;i<r;i++)
    {
        for(j=0;j<r;j++)
        {
               b[i][j]=a[j][i];
        }
    }
    for(i=0;i<r;i++)
        {
            for(j=0;j<r;j++)
            {
                int sum=0;
                for(k=0;k<r;k++)
                {
                    sum=sum+a[i][k]*b[k][j];
                }
                result[i][j]=sum;
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<r;j++)
            {
                if(i==j&&result[i][j]!=1)
                {
                   found=1;
                   break;
                }
                else if(i!=j&&result[i][j]!=0)
                {
                    found=1;
                    break;
                }
            }
        }
        if(found==0)
        {
            printf("YES\n");
        }
        else if(found==1)
        {
            printf("NO\n");
        }
}



