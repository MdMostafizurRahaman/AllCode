#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5);

    cout << "Size:" << q.size() << endl;
    q.pop();
    cout << "Size:" << q.size() << endl;
    q.back()+=5;
    cout << "Add 5 to the last:" << q.back() << endl;
    cout << "Front:" << q.front() << endl;
    q.pop();
    cout << "Front:" << q.front() << endl; 
    cout << "Is empty:" << q.empty() << endl;

    stack<int> s1, s2;
    s1.swap(s2);




}