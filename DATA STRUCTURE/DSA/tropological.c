#include<stdio.h>
#include<stdlib.h>

int s[100], j, res[100];
int a[100][100];
int ver,edge;

void AdjacencyMatrix(int n)
{
   scanf("%d",&edge);
   while(edge--)
   {
       int c,b;
       scanf("%d%d",&b,&c);

       a[b][c]=1;
       //a[c][b]=1;
   }

}

void dfs(int u, int ver)
{

    int v;
    s[u] = 1;
    for (v = 0; v < ver - 1; v++)
    {
        if (a[u][v] == 1 && s[v] == 0)
        {
            dfs(v, ver);
        }
    }
    j += 1;
    res[j] = u;
}

void topological_order(int ver)
{

    int u;
    for (int i = 0; i < ver; i++)
    {
        s[i] = 0;
    }
    j = 0;
    for (u = 0; u < ver; u++)
    {
        if (s[u] == 0)
        {
            dfs(u, ver);
        }
    }
    return;
}
int main()
{

    printf("Enter number of vertices\n");
    scanf("%d", &ver);

    printf("Enter the edges:");

    AdjacencyMatrix(ver);

    printf("Adjacency Matrix of the graph\n");
    for (int i=0; i<ver; i++)
    {
        for (int j=0; j<ver; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Topological order:\n");

    topological_order(ver);

    for (int i =ver; i >= 1; i--)
    {
        printf("%d ", res[i]);
    }

}
