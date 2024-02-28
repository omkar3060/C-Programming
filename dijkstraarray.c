#include<stdio.h>
void dijkstras(int m[10][10],int dist[10],int path[10],int u,int n)
{
    int k=dist[u];
    for(int j=0;j<n;j++)
    {
        if(dist[j]>(k+m[u][j]))
        {
           dist[j]=k+m[u][j];
           path[j]=u;
        }
    }
}
int main()
{
    int m[10][10],i,j,dist[10],path[10],src,n,min,index,k,visited[10]={0,0,0,0,0,0,0,0,0,0},u;
    printf("Enter the source and number of vertices\n");
    scanf("%d%d",&src,&n);
    printf("Enter the adjacency matrix");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&m[i][j]);
    }
    for(i=0;i<n;i++)
        path[i]=src;
    for(i=0;i<n;i++)
        dist[i]=m[src][i];
    visited[src]=1;
    for(int p=0;p<n-1;p++)
    {
        min=32768;
        for(i=0;i<n;i++)
        {
            if(dist[i]<min&&dist[i]!=0&&visited[i]==0)
            {
                min=dist[i];
                index=i;
            }
        }
        visited[index]=1;
        u=index;
        dijkstras(m,dist,path,u,n);
    }
    printf("Final distance array is\n");
    for(j=0;j<n;j++)
    {
        printf("%d ",dist[j]);
    }
    printf("\nFinal path array is\n");
    for(j=0;j<n;j++)
    {
        printf("%d ",path[j]);
    }
}
