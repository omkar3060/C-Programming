#include<stdio.h>
main()
{
    void read(int a[200],int);
    void nge(int[],int);
    int n,a[200];
    scanf("%d",&n);
    read(a,n);
    nge(a,n);
}
void read(int a[200],int n)
{ int i;
    for( i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void nge(int a[200],int n)
{
    int max=a[0],j;
    for(int i=0;i<n;i++)
    {
       max=a[i];
       for(int j=i+1;j<n;j++)
       {
       if(a[j]>max)
       {
           max=a[j];
           break;
       }
       }
       if(i<(n-1)&&a[i]!=max)
       {
       printf("%d %d\n",a[i],max);
       }
       else
       {
           printf("%d -1\n",a[i]);
       }
    }
}
