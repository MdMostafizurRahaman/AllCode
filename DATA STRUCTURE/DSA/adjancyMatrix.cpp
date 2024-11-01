#include<bits/stdc++.h>
using namespace std;


int a[200][200];
int main()
{
     int n_ver,n_edge;
     cin>>n_ver>>n_edge;

     for(int i=0;i<=n_ver;i++)
     {
         for(int j=0;j<=n_ver;j++)
          {
              a[n_ver][n_ver]=0;
          }
     }
     for(int i=1;i<=n_edge;i++)
     {
         int c,b;
         cin>>b>>c;
         a[b][c]=1;
         a[c][b]=1;
     }
     for(int i=0;i<n_ver;i++)
     {
         for(int j=0;j<n_ver;j++)
          {
              cout<<a[i][j]<<" ";
          }
          cout<<"\n";
     }
}
