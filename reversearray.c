#include<stdio.h>
int a[20],n,i;
main()
{
     void read(int[],int);
       void display(int[],int);
       void rev(int[],int);
       scanf("%d",&n);
       read(a,n);
       display(a,n);
       rev(a,n);
}
 void read(int a[20],int n)
     { printf("read the array elements=\n");
         for(i=0;i<n;i++)
         {
             scanf("%d",&a[i]);
         }
     }
     void display(int a[20],int n)
     {
         printf("displaying the array elements=\n");
         for(i=0;i<n;i++)
         {
             printf("%d\n",a[i]);
         }
     }
     void rev(int a[20],int n)
     {
         int temp;
         for(i=0;i<n/2;i++)
         {
             temp=a[i];
             a[i]=a[n-i-1];
             a[n-1-i]=temp;
         }
         for(i=0;i<n;i++)
         {
             printf("%d ",a[i]);
         }
     }
