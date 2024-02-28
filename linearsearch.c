#include<stdio.h>
int search(int a[100],int n,int j,int x)
{
    if(a[j]==x)
        return j;
    else if(j==n-1)
        return 0;
    else
        return search(a,n,j+1,x);
}
int main()
{
   int a[100];
   int x,n,index=-1,i;
   static int j=0;
   printf("Enter the number of elements\n");
   scanf("%d",&n);
   printf("Enter the elements\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("Enter the key to be searched\n");
   scanf("%d",&x);
   index=search(a,n,j,x);
   if(index<0)
    printf("Element not found\n");
   else
   printf("Element found at index %d",index);
}
