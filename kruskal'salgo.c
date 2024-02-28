#include<stdio.h>
struct node
{
    int u,v,w;
};
void insertionsort(struct node a[20],int n)
{
    int j,i,k;
    struct node m;
    for(j=1;j<n;j++)
    {
        i=0;
        while(a[j].w>a[i].w)
        {
            i+=1;
        }
        m=a[j];
        for(k=0;k<j-i;k++)
        {
            a[j-k]=a[j-k-1];
        }
        a[i]=m;
    }
}
void union1(int arr[],int n,int u,int v)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[u])
            arr[i]=arr[v];
    }
}
int find(int arr[9],int n,int u,int v)
{
    if(arr[u]==arr[v])
        return 1;
    return 0;
}
void kruskals(struct node a[14],int n,int arr[9])
{
    int k=0;
    int cost=0,count=0;
    for(k=0;k<14;k++)
    {
       if(find(arr,n,a[k].u,a[k].v)==0)
       {
           printf("%d %d\n",a[k].u,a[k].v);
           cost+=a[k].w;
           count++;
           union1(arr,n,arr[a[k].u],arr[a[k].v]);
           if(count==n-1)
            break;
       }
    }
    printf("%d is the cost of the minimum spanning tree\n",cost);
}
int main()
{
    struct node a[14]={{2,8,4},{6,7,2},{5,6,4},{0,1,8},{2,5,8},{6,8,12},{2,3,14},{7,8,14},{0,7,16},{1,2,16},{3,4,18},{4,5,20},{1,7,22},{3,5,28}};
    int arr[9],n=9;
    for(int i=0;i<n;i++)
    {
        arr[i]=i;
    }
    insertionsort(a,14);
    kruskals(a,n,arr);
}
