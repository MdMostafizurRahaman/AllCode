#include<iostream>
using namespace std;

int main()
{
    int t, n, k, i;
    
    cin >> t;

    for(i = 0; i < t; i++)
    {
        int sum = 0;
        cin >> n >> k ;
        int a[n];
        for(int j = 0; j < n; j++)
        {
            
            cin >> a[j];
            
        }
        for(int j = 0; j < n; j++)
        {
            sum = sum + a[j];
            //cout << sum;
        }
        

        if(sum == 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    
}