#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>st;
    st.insert(1); //{1}
    st.insert(2); //{1, 2}
    st.emplace(2); //{1, 2} only unique element store in sorted order
    st.emplace(3); //{1, 2, 3}
    st.insert(4); //{1, 2, 3, 4}
    st.insert(5); // {1, 2, 3, 4, 5}

    auto it = st.find(3);
    st.erase(5);
    int cnt = st.count(4);
    cout << cnt;
    st.insert(5);

    auto it1 = st.find(2);
    auto it2 = st.find(4);

    st.erase(it1, it2);
}