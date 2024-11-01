#include<bits/stdc++.h>
using namespace std;

void f1(int i, int n){
    if(i > n){
        return;
    }
    cout << i << ":Rakib\n";
    f1(i + 1, n);
}

void f2(int i, int n){
    if(i < 1){
        return;
    }
    cout << i << ":Rakib\n";
    f2(i - 1, n);
}

int main(){
    int n;
    cout << "How many times u want to print ur name:";
    cin >> n;
    f1(1, n);
    cout << endl << endl;
    f2(n, n);

    return 0;
}