#include<stdio.h>

int graph[100][100], trans_graph[100][100];
int vis[100], order[100], scc[100];
int vertex, edge, order_cnt, scc_cnt;

void dfs1(int node){
    vis[node]=1;

    for(int child=1;child<=vertex;child++){
        if(graph[node][child]==1){
            if(vis[child]==0){
                dfs1(child);
            }
        }
    }

    order[order_cnt]=node;
    order_cnt++;
}

void dfs2(int node){
    vis[node]=1;

    for(int child=1;child<=vertex;child++){
        if(trans_graph[node][child]==1){
            if(vis[child]==0){
                dfs2(child);
            }
        }
    }

    scc[scc_cnt]=node;
    scc_cnt++;
}

int main()
{
    freopen("kosaraju.txt","r",stdin);
    int a,b;
    scanf("%d %d",&vertex,&edge);
    for(int i=0;i<edge;i++){
        scanf("%d %d",&a,&b);
        graph[a][b]=1;
        trans_graph[b][a]=1;
    }

    for(int i=1;i<=vertex;i++){
        if(vis[i]==0){
            dfs1(i);
        }
    }

    for(int i=1;i<=vertex;i++){
        vis[i]=0;
    }

    for(int i=vertex-1;i>=0;i--){
        if(vis[order[i]]==0){
            // first of all clear the scc array
            for(int i=1;i<=vertex;i++){
                scc[i]=0;
            }
            scc_cnt=0;

            dfs2(order[i]);

            printf("dfs2() called from %d and prnting scc: ",order[i]);
            for(int ii=0;ii<scc_cnt;ii++){
                printf("%d ",scc[ii]);
            }
            printf("\n");
        }
    }
}
