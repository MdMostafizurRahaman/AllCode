#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    v.push_back(10);
    v.emplace_back(20);
    cout << "V vector 1st:" << v[0] << "\t 2nd:" << v[1] << endl;
    for(auto it:v){
        cout << it << " ";
    }
    cout << endl;

    vector<pair<int, int>>vec;
    vec.push_back({1, 5});
    vec.emplace_back(10, 5);
    cout << "Pair vector 1st:" << vec[0].first << "\t2nd:" << vec[0].second << "\t1st:" << vec[1].first << "\t2nd:" << vec[1].second  << endl;

    vector<int>container(5,30);
    for(auto it:container){
        cout << it << " ";
    }
    cout << endl;

    vector<int>containergerbase(5);
    for(auto it:containergerbase){
        cout << it << " ";
    }
    cout << endl;

    vector<int>copy(container);
    for(auto it:copy){
        cout << it << " ";
    }
    cout << endl;

    vector<int>::iterator it = v.begin();
    cout << "V vector begin:" << *(it) << endl;

    cout << *(v.begin()) << endl;
    cout << *(container.begin()) << endl;
    cout << *(v.end() - 1) << endl; //output is a gurbase value if v.end() is used. bcz v.end() point to the right after the next position
    cout << *(v.rend() + 1) << endl;
    cout << *(v.rbegin()) << endl;

    // cout << "Vecter user input" << endl;
    // vector<int>delation(1);
    // for(auto it:delation){
    //     int x;
    //     cin >> x;
    //     delation.push_back(x);
    // }
    // cout << endl;
    // for(auto it:delation){
    //     cout << it << " ";
    // }
    // cout << endl;
    vector<int>del;
    del.push_back(1);
    del.push_back(2);
    del.push_back(3);
    del.push_back(4);
    del.push_back(5);
    del.push_back(6);
    del.push_back(7);
    del.push_back(8);
    del.push_back(9);

    for(auto it:del){
        cout << it << " ";
    }
    cout << endl;

    del.erase(del.begin());
    cout << "After delete:";
    for(auto it:del){
        cout << it << " ";
    }
    cout << endl;

    cout << "Delete from a specific add to another add:";
    del.erase(del.begin(), del.begin() + 5);
    for(auto it:del){
        cout << it << " ";
    }
    cout << endl;

    vector<int>enter(2, 10);
    enter.insert(enter.begin(), 300);
    enter.insert(enter.begin() + 2, 5, 1000);
    enter.insert(enter.begin(), container.begin(), container.end());
    for(auto it:enter){
        cout << it << " ";
    }
    cout << endl;
    cout << "Size:" << enter.size() << endl;

    enter.pop_back();
    cout << "After pop" << endl;
    for(auto it:enter){
        cout << it << " ";
    }
    cout << endl;
    cout << "Size:" << enter.size() << endl;

    enter.swap(containergerbase);
    for(auto it:enter){
        cout << it << " ";
    }
    cout << endl;
    cout << "Size:" << enter.size() << endl;

    enter.clear();
    for(auto it:enter){
        cout << it << " ";
    }
    cout << endl;
    cout << "Size:" << enter.size() << endl;
    

}