#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int>dq;
    dq.push_back(5);
    dq.emplace_back(20);
    dq.push_front(100);
    dq.emplace_front(1000);
    dq.emplace_back();

    for(auto it:dq){
        cout << it << " ";
    }
    cout << endl;

    dq.pop_back();
    dq.pop_front();

    for(auto it:dq){
        cout << it << " ";
    }

}