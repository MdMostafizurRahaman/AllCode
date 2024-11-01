#include<stdio.h>

#define inf 100000
char color[1000];
int prev[1000],f[1000],d[1000];
int time,count;

struct node
{
    int val;
    int ft;
} nodes[1000];
void DFS_Visit(int u,int max,int g[][max+1])
{
    color[u]='g';
    time++;
    d[u]=time;

    int v;

    for(int i=1; i<=max; i++)
    {
        if(g[u][i]==1)
        {
            v=i;
            if(color[v]=='w')
            {
                prev[v]=u;
                DFS_Visit(v,max,g);
                //count++;
            }

        }
    }
    color[u]='B';
    time++;
    f[u]=time;
    //printf("%d ",u);
}

void DFS(int max,int g[][max+1],int s)
{
    for(int i=1; i<=max; i++)
    {
        color[i]='w';
        prev[i]=-1;
        f[i]=inf;
        d[i]=inf;
    }
    time=0;
    DFS_Visit(s,max,g);

    for(int i=1; i<=max; i++)
    {
        if(color[i]=='w')
        {
            //printf("\n");
            count++;
            DFS_Visit(i,max,g);


        }

    }

}
void DFS_Visit_scc(int u,int max,int g[][max+1])
{
    color[u]='g';
    time++;
    d[u]=time;

    int v;

    for(int i=1; i<=max; i++)
    {
        if(g[u][i]==1)
        {
            v=i;
            if(color[v]=='w')
            {
                prev[v]=u;
                DFS_Visit_scc(v,max,g);
            }
        }
    }
    color[u]='B';
    time++;
    f[u]=time;
    printf("%d ",u);
}
void DFS_scc(int max,int g[][max+1])
{
    for(int i=1; i<=max; i++)
    {
        color[i]='w';
        prev[i]=-1;
        f[i]=inf;
        d[i]=inf;
    }
    time=0;
    for(int i=1; i<=max; i++)
    {
        if(color[nodes[i].val]=='w')
        {
            printf("\n");
            DFS_Visit_scc(nodes[i].val,max,g);
        }
    }

}

int main()
{
    printf("Enter the number of vertex and edges of the graph:\n");
    int m,n;
    scanf("%d%d",&m,&n);
    int g[m+1][m+1],gt[m+1][m+1];
    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=m; j++)
        {
            g[i][j]=0;
        }
    }
    int max=m;
    printf("Enter the corresponding edges of the vertex: \n");
    for(int i=0; i<n; i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        g[x][y]=1;
        gt[y][x]=1;

    }
    int s;
    printf("Enter the source node: ");
    scanf("%d",&s);
    DFS(max,g,s);
    printf("components are: %d",count);

   // transpose(max,g,gt);
    //struct node nodes[max];
    for(int i=1; i<=max; i++)
    {
        nodes[i].val=i;
        nodes[i].ft=f[i];
    }

    for (int j = 1; j < max; ++j)
    {

        for (int i = 1; i < max - j; ++i)
        {
            if (nodes[i].ft < nodes[i+1].ft)
            {
                struct node temp = nodes[i];
                nodes[i] = nodes[i + 1];
                nodes[i + 1] = temp;
            }
        }
    }
    printf("Strongly connected components are: ");
    DFS_scc(max,gt);
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
7 8
3 7
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