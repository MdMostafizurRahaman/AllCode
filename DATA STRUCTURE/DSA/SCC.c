#include<stdio.h>
#include<stdlib.h>

int graph[10][10],on_stack[10];
int previous[10];
int visited[10];
int in[10],low[10];
int n,timer=1,scc=0;
int st[100];

int top = -1;

void push(int x)

{

    st[++top] = x;

}

int pop()

{

    if(top == -1)

        return -1;

    else

        return st[top--];

}

int peek()
{
    if(top >= 0)
    {
        return st[top];
    }

    return -1;
}
int min(int num1, int num2)
{
    return (num1 > num2 ) ? num2 : num1;
}
int DFS(int start)
{
    visited[start]=1;
    in[start]=low[start]=timer++;
    on_stack[start]=1;
    push(start);

    for(int i=1; i<=n; i++)
    {
        if(graph[start][i]==1)
        {
            if((visited[i]==1)&&(on_stack[i]==1))
            {
                low[start]=min(low[start],in[i]);
            }

            else if(visited[i]==0)
            {
                //previous[i]=start;
                DFS(i);

                if(on_stack[i]==1) low[start]=min(low[start],low[i]);
            }
        }
    }
    if(in[start]==low[start])
    {
        scc++;
        printf("scc #%d\n",scc);
        int u;
        while(1)
        {
            u=peek();
            pop();
            on_stack[u]=0;
            printf("%d ",u);

            if(u==start) break;
        }
        printf("\n");
    }
}
int main()
{
    int e;
    scanf("%d%d",&n,&e);//vertex edge
    for(int i=1; i<=e; i++)
    {
        visited[i]=0;
        for(int j=1; j<=n; j++)
        {
            graph[i][j]=0;
        }
    }

    for(int i=1; i<=e; i++)
    {

        int u,v;
        scanf("%d%d",&u,&v);
        graph[u][v]=1;

    }
//int count=0;
    for(int i=1; i<=n; i++)
    {
        visited[i]=on_stack[i]=0;
    }

    for(int i=1; i<=n; i++)
    {
        previous[i]=-1;
    }

    for(int i=1; i<=n; i++)
    {
        if(visited[i]==0)
        {
            DFS(i);
            //  count++;
        }
    }

}

