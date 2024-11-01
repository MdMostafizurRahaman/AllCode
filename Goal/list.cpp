#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>ls;
    ls.push_back(5);
    ls.emplace_back(20);
    ls.push_front(100);
    ls.emplace_front(1000);
    ls.emplace_back();

    for(auto it:ls){
        cout << it << " ";
    }
}