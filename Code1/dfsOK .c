#include<stdio.h>
#define max_size 50
int G[max_size][max_size],Parent[max_size];
char Colour[max_size];

void print_matrix(int v)
{
    for(int i=0;i<=v;i++){
        for(int j=0;j<=v;j++)
    {
        printf("%d ",G[i][j]);
    }
    printf("\n");
  }
}

void print_final_DFS_list(int v)
{
    printf("Vertex   :");
    for(int i=1;i<=v;i++)
    {
        printf("%d\t",G[0][i]);

    }
    printf("\nColour   :");
    for(int i=1;i<=v;i++)
    {
        printf("%c\t",Colour[i]);
    }
    printf("\nParent  :");
    for(int i=1;i<=v;i++)
    {
      printf("%d\t",Parent[i]);
    }
    printf("\n");
}


void DFS(int source,int v)
{
    Colour[source]='g';
    for(int i=1;i<=v;i++)
    {
        if(G[source][i]==1 && Colour[i]=='w')
        {
            Parent[i]=source;
            DFS(i,v);
        }
    }
    Colour[source]='B';
}

int main()
{
    printf("Enter number of Vertex\n");
    int v;
    scanf("%d",&v);
    for(int i=0;i<=v;i++)
    {
        for(int j=0;j<=v;j++)
        {
            G[i][j]=0;
        }
    }

    printf("Enter name of the Vertex\n");
    int a,b,name;
    for(int i=1;i<=v;i++)
    {
        scanf("%d",&name);
        G[0][i]=name;
        G[i][0]=name;
    }

    printf("Enter Number of Edges\n");
    int ed,source;
    scanf("%d",&ed);
    printf("Enter Edges\n");
    while(ed--)
    {
        scanf("%d%d",&a,&b);
        G[a][b]=1;
    }

    for(int i=1;i<=v;i++)
    {
        Colour[i]='w';
        Parent[i]=-1;
    }

    print_matrix(v);
    printf("Enter Sources\n");
    scanf("%d",&source);
    DFS(source,v);
    print_final_DFS_list(v);
    return 0;
}
/*
6
1 2 3 4 5 6
8
1 6
1 4
4 3
3 2
3 5
5 2
2 1
3 1
1
*/