#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    cout << "Top:" << st.top() << endl;;
    st.pop();
    cout << "Size:" << st.size() << endl;
    cout << "Is empty:" << st.empty() << endl;

    stack<int> s1, s2;
    s1.swap(s2);




}