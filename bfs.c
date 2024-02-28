#include<stdio.h>
void bfs(int m[5][5],int v,int source)
{
    int queue[10],r=0,f=0,i,u,visited[10];
    for(i=0;i<v;i++)
        visited[i]=0;
    queue[r]=source;
    visited[source]=1;
    printf("BFS\n");
    while(f<=r)
    {
        u=queue[f];
        printf("%d ",u);
        f+=1;
        for(i=0;i<v;i++)
        {
            if(m[u][i]==1&&visited[i]==0)
            {
                visited[i]=1;
                r+=1;
                queue[r]=i;
            }
        }
    }
}
int main()
{
    int m[5][5]={{0,1,1,0},{1,0,0,1},{1,0,0,1},{0,1,1,0}};
    int source=0,v=4;
    bfs(m,v,source);
}
