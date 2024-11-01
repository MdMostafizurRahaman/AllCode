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
    int hash[13] = {0};
    for(int i = 0; i < n; i++){
        hash[arr[i]]++;
    }
    for(int i = 1; i <= n; i++){
        cout << hash[i] << " ";
    }

    int q;
    cout << "How many number want to search:";
    cin >> q;
    while(q--){
        int number;
        cout << "Searched number:";
        cin >> number;
        //fetch
        cout << hash[number] << endl;
    }
    return 0;

}
/*
input
5
1 3 2 1 3
5
1 
2 
3
5
10
*/