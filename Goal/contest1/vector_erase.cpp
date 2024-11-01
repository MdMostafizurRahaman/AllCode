#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    int b;
    cin >> b;
    v.erase(v.begin() + b - 1);
    int c, d;
    cin >> c >> d;

    v.erase(v.begin() + c - 1, v.begin() + d - 1);
    cout << v.size() << endl;
    for(auto it : v){
        cout << it << " ";
    }

}