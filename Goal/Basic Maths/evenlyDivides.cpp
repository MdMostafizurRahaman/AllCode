#include<bits/stdc++.h>
using namespace std;

int evenlyDivides(int N){
    int k = N, l = 0, c = 0;
    while(k > 0){
        int w = k % 10;
        if(N%w == 0){
            l++;
        }
        else{
            l = l;
        }
        k /= 10;
    }
    if(l == 0){
        return 0;
    }
    else{
        return l;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        cout << evenlyDivides(N);
    }
}