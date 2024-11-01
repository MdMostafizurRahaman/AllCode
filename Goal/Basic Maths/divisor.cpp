#include <bits/stdc++.h> 
using namespace std;

int printDivisors(int n){
    int c = 0;
    for(int i = 1; i <= n; i++){
        if (n % i == 0) {
            c++;
        }
    }
    if(c == 2){
        cout << "true";
    }
    else{
        cout << "false";
    }
}  

int main() {
    int n;
    cin >> n;
    printDivisors(n);
    return 0;
}