#include<bits/stdc++.h>
using namespace std;

int a[100];
int n;

void bubbleSort(int a[]){

     for(int i=0;i<n-1;i++)
     {   int flag=0;
         for(int j=0;j<n-i-1;j++)
         {
             if(a[j]>a[j+1])
             {
                 int temp=a[j+1];
                 a[j+1]=a[j];
                 a[j]=temp;
                 flag++;
             }
         }
         if(flag==0)
            break;
     }
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    bubbleSort(a);
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
