#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    float x = sqrt(n);
    if(x == floor(sqrt(n))){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}