#include<stdio.h>
#include<stdlib.h>
#define SIZE 100000

int main()
{
    int n;
    int a[SIZE];
     scanf("%d",&n);

        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

        quicksort(a,0,n-1);
        printf("sorted elements\n");
        for(int i=0;i<n;i++)
        printf("%d  ",a[i]);
}
void quicksort(int a[],int left,int right)
{
    int s;
    if(left<right)
    {
        s=partitionz(a,left,right);
        quicksort(a,left,s-1);
        quicksort(a,s+1,right);

    }
}
int partitionz(int a[],int left,int right)
{
    int i,j,pivot;
    int temp;
    pivot=a[left];
    i=left;
    j=right+1;


    while(1)
    {
        do
        {
            i=i+1;

        }while(a[i]>pivot);
        do
        {
            j=j-1;

        }while(a[j]<pivot);

        swap(&a[i],&a[j]);
        if(i>=j)
            break;

    }

        swap(&a[i],&a[j]);
        swap(&a[left],&a[j]);

        return j;
}

void swap(int *a,int *b)
{

        int temp;
        temp=*a;
        *a=*b;
        *b=temp;
}
