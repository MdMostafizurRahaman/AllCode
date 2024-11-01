#include<stdio.h>

int relation_matrix[200][200];
char color[200];
int parent_idx[200];
int distance[200];
int edge,vertex,count=0;

void initialize()
{
    int i,j;

  for(i=0;i<vertex;i++)
    for(int j=0;j<vertex;j++)
        {
            relation_matrix[i][j]=0;
        }

        for(i=0;i<vertex;i++){

        color[i]='w';
        parent_idx[i]=-1;
        distance[i]=1000000;
        }

}

void build_matrix()
{

    int i;
    for(i=0; i<edge; i++)
    {
        int u,v;
        printf("enter u & v");
        scanf("%d %d",&u,&v);

        relation_matrix[u][v]=1;
        relation_matrix[v][u]=1;
    }



}

    int main(void)
    {
        //freopen("bfs_input.txt","r",stdin);
        int i;


        printf("how many edge the graph have?");
        scanf("%d",&edge);

        printf("how many vertex you wanna insert?");
        scanf("%d",&vertex);

        initialize();

        build_matrix();

        //get the source node
        int sourcenode;
        printf("enter the index of the source node");
        scanf("%d",&sourcenode);

        int queue[vertex];
        int start,end=0;//end-> inserting data in queue.
        queue[end]=sourcenode;
        end++;
        color[sourcenode]='g';
        distance[sourcenode]=0;
        parent_idx[sourcenode]=-1;
        int index=0;

        while((end-start)>0)
        {
            int u=queue[start];

            for(i=0; i<vertex; i++)
            {
                int v=i;


                if(relation_matrix[u][v]==1&&color[v]=='g'){count++;break;}
                if(relation_matrix[u][v]==1&&color[v]=='w')
                {
                    queue[end]=v;
                    end++;
                    color[v]='g';
                    distance[v]=distance[u]+1;
                    parent_idx[v]=u;
                }
            }
            start++;//dequeue
            color[u]='b';
            if(count!=0)break;
        }

        if(count!=0)printf("cyclic");
        else printf("acyclic");





    }
