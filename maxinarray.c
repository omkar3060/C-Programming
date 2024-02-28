#include<stdio.h>
    void read(int a[20],int n)
     {
         int i;
         printf("Read the array elements=\n");
         for(i=0;i<n;i++)
         {
             scanf("%d",&a[i]);
         }
     }
     void display(int a[20],int n)
     {
         int i;
         printf("Displaying the array elements\n");
         for(i=0;i<n;i++)
         {
             printf("%d\n",a[i]);
         }
     }
     int maxarray(int a[20],int n)
     {
         int max=a[0],i;
         for(i=1;i<n;i++)
         {
             if(a[i]>max)
                max=a[i];
         }
         return max;
     }
    int main()
     {
       int n,a[100],max;
       printf("Enter the number of array elements=\n");
       scanf("%d",&n);
       read(a,n);
       display(a,n);
       max=maxarray(a,n);
       printf("The max element is=%d\n",max);
     }
