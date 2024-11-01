#include<stdio.h>

#define inf 100000

char color[1000];
int prev[1000],f[1000],d[1000],level[1000];
int time;

void DFS_Visit(int u,int m,int g[][m+1])
{
    color[u]='g';
    time++;
    d[u]=time;

    int v;

    for(int i=1; i<=m; i++)
    {
        if(g[u][i]==1)
        {
            v=i;
            if(color[v]=='w')
            {
                prev[v]=u;
                level[i]=level[u]+1;
                DFS_Visit(v,m,g);
            }
        }
    }
    color[u]='B';
    time++;
    f[u]=time;
    //printf("%d ",u);
}

void DFS(int m,int g[][m+1],int s)
{
    for(int i=1; i<=m; i++)
    {
        color[i]='w';
        prev[i]=-1;
        f[i]=inf;
        d[i]=inf;
    }
    time=0;
    DFS_Visit(s,m,g);

    for(int i=1; i<=m; i++)
    {
        if(color[i]=='w')
        {
            //printf("\n");
            DFS_Visit(i,m,g);
        }
    }

}
int main()
{
    printf("Enter the number of vertex and edges of the graph:\n");
    int m,n;
    scanf("%d%d",&m,&n);
    int g[m+1][m+1];
    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=m; j++)
        {
            g[i][j]=0;
        }
    }

    printf("Enter the corresponding edges of the vertex: \n");
    for(int i=0; i<n; i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        g[x][y]=1;
    }
    int s;
    printf("Enter the source node: ");
    scanf("%d",&s);
    DFS(m,g,s);

    printf("Enter the two nodes for shortest path: ");
    int a,b;
    scanf("%d%d",&a,&b);

    printf("%d",abs(level[a]-level[b]));
    for(int i=1; i<=m; i++)
    {
        printf("Parent of %d node is %d\n",i,prev[i]);
        printf("Color of %d node is %c\n",i,color[i]);
        printf("Discovery time of %d node is %d\n",i,d[i]);
        printf("Final time of %d node is %d\n",i,f[i]);
        printf("\n");

    }


}
/*
1 2
5 1
2 5
5 6
2 6
2 3
6 7
7 6

3 7 7 8
8 8
4 3
3 4
4 8
*/
/*
8 10
1 2
2 3
3 1
3 4
4 5
5 6
6 7
7 8
5 6
7 5
*/


