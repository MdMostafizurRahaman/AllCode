#include<bits/stdc++.h>
using namespace std;

int main(){
    cout << "Enter a number to be extracted:";
    int n, c = 0;
    cin >> n;

    while(n > 0){
        int w = n % 10;
        cout << w << " ";
        c++;
        n = n / 10;
    }
    cout << c;
}