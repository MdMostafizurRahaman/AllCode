#include<iostream>
using namespace std;
int main()
{
    int a = 0;
    int k = 0;
    cout << "(a - b -c*d )2\n";
    while(a < 7)
    {
        
        for(int i = 0; i < 7; i++)
        {   
            int a, b , c  , d;
            cin >> a >> b >> c >>  d;
            k = k + ((a - b -c*d )*(a - b -c*d ));
        }
        a++;
    }   
    cout << k;
}