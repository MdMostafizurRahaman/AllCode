#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int coun = 0;
    while(n > 0){
        int w = n % 10;
        n = n / 10;
        coun++;
    }
    return coun;
}

int main(){
    int n;
    cin >> n;
    int k = count(n); 
    cout << "Number of digit:" << k;
}