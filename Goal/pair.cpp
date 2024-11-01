#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int, int>p = {1, 2};
    cout << "Pair 1st element:" << p.first << "\nPair 2nd element:" << p.second << endl;

    pair<int, pair<int ,int>>nestedPair = {1, {3, 4}};
    cout << "Nested pair 1st elemet:" << nestedPair.first << "\nNested Pair 2nd element:" << nestedPair.second.first << "\nNested Pair 3rd element:" << nestedPair.second.second << endl;

    pair<int, int>arr[] = {{1, 2}, {3, 4}, {3, 5}};
    cout << "Pair array 1st:" << arr[0].first << "\nPair array 2nd:" << arr[0].second << "\nPair array 3rd:" << arr[1].first << "\nPair array 4th:" << arr[1].second << endl; 
}