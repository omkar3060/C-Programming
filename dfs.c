#include<stdio.h>
void dfs(int m[5][5],int v,int source,int visited[10])
{
    visited[source]=1;
    for(int i=0;i<v;i++)
    {
        if(m[source][i]==1&&visited[i]==0)
        {
            printf("%d ",i);
            dfs(m,v,i,visited);
        }
    }
}
int main()
{
    int m[5][5]={{0,1,1,0,0},{1,0,0,1,0},{1,0,0,1,0},{0,1,1,0,1},{0,0,0,1,0}};
    int visited[10],source=0,v=5,i;
    for(i=0;i<v;i++)
        visited[i]=0;
    printf("DFS\n");
    printf("%d ",source);
    dfs(m,v,source,visited);
}
