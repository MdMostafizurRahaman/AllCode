#include <bits/stdc++.h> 
using namespace std;

int GCD(int a, int b){
    int result;
    for(int i = 1; i <= min(a, b); i++){
        if((a % i == 0) && (b % i == 0)){
            result = i;
        }
    }
    return result;
}


int main(){
    int a, b;
    cin >> a >> b;
    int ans = GCD(a, b);
    cout << ans;
    return 0;
}