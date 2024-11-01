//13 size hashing
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //pre-compute
    map<int, int>mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    

    for(auto it: mpp){
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cout << "How many number want to search:";
    cin >> q;
    while(q--){
        int number;
        cout << "Searched number:";
        cin >> number;
        //fetch
        cout << mpp[number] << endl;
    }
    return 0;

}
/*
input
7
1 3 2 1 3 3 3
5
1 
2 
3
5
10
*/