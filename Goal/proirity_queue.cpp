#include<bits/stdc++.h>
using namespace std;

int main(){
    //max heap
    priority_queue<int>pq;
    pq.push(5); //{5}
    pq.push(2); //{5, 2}
    pq.push(8); //{8, 5, 2}
    pq.emplace(10); //{10, 8, 5, 2}
    pq.emplace(1); //{10, 8, 5, 2, 1}

    cout << "Top:" << pq.top() << endl;
    pq.pop();
    cout << "Top:" << pq.top() << endl;

    //min heap
    priority_queue<int, vector<int>, greater<int>>minpq;
    minpq.push(3); //{3}
    minpq.push(4); //{3, 5}
    minpq.push(2); //{2, 3, 5}
    minpq.emplace(10); //{2, 3, 5, 10}

    cout << "Top:" << minpq.top() << endl;
    minpq.pop();
    cout << "Top:" << minpq.top() << endl;



}