#include<bits/stdc++.h>
using namespace std;

int count(int n){
    int reverse = 0;
    while(n > 0){
        int lastDigit = n % 10;
        n = n / 10;
        reverse = (reverse * 10 ) + lastDigit;
    }
    cout << reverse;
}

int main(){
    int n;
    cin >> n;
    count(n); 
    
}