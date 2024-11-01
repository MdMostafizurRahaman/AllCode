#include<iostream>
using namespace std;

int main()
{
    int t, n, i;
    
    cin >> t;

    for(i = 0; i < t; i++)
    { 
        int sum = 0;
        cin >> n;
        int a[n];
        for(int j = 0; j < n; j++)
        {
            cin >> a[j];   
             
        }
        
        for(int j = 0; j < n-1; j++)
        { 
            if(a[j]-a[j+1] == 1)
            sum++;
        }
        cout << sum << "\n";
    }
    
}
