#include<stdio.h>
void merge(int a[100],int n1,int b[100],int n2,int c[200])
{
    int j=0,i=0,k=0;
    while(i<n1&&j<n2)
    {
        if(a[i]>=b[j])
        {
          c[k++]=b[j];
          j++;
        }
        else
        {
            c[k++]=a[i];
            i++;
        }
        if(i>(n1-1))
        {
            while(j<n2)
            {
                c[k++]=b[j];
                j++;
            }
        }
        else if(j>(n2-1))
        {
           while(i<n1)
            {
                c[k++]=a[i];
                i++;
            }
        }
    }
    printf("Merging the lists,we get\n");
    for(i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }
}
int main()
{
    int a[100],b[100],n1,n2,c[200],i;
    printf("Enter the size of list1\n");
    scanf("%d",&n1);
    printf("Enter the elements of list1\n");
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
    printf("Enter the size of list1\n");
    scanf("%d",&n2);
    printf("Enter the elements of list1\n");
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
    merge(a,n1,b,n2,c);
}
