#include<stdio.h>
void bubblesort(int a[100],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<=n-i-2;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void selectionsort(int a[100],int n)
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
                min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void insertionsort(double a[100],int n)
{
    int i,j;
    double v,temp;
    for(i=1;i<n;i++)
    {
        v=a[i];
        j=i-1;
        while(j>=0&&a[j]>v)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=v;
    }
    for(i=0;i<n;i++)
    {
        printf("%lf ",a[i]);
    }
}
int main()
{
    int n=40;
    double a[100]={1.09, 1.92, 2.31, 1.79, 2.28, 1.74, 1.47, 1.97, 0.85, 1.24, 1.58, 2.03,
1.70, 2.17, 2.55, 2.11, 1.86, 1.90, 1.68, 1.51, 1.64, 0.72, 1.69, 1.85,
1.82, 1.79, 2.46, 1.88, 2.08, 1.67, 1.37, 1.93, 1.40, 1.64, 2.09, 1.75,
1.63, 2.37, 1.75, 1.69},i;
   // bubblesort(a,n);
   //selectionsort(a,n);
   insertionsort(a,n);
}
