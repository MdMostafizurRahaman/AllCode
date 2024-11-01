#include<bits/stdc++.h>
using namespace std;
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int arr[m][n];
        for(int i = 0; i < indices.size(); i++){
            for(int j = 0; j < indices[i].size(); j++){
                if(indices[i][j] == 1){
                    for(int k = 0; k < n; i++){
                        arr[i][k] += 1;
                    }
                    for(int k = 0; k < m; i++){
                        arr[j][k] += 1;
                    }

                }
            }
        }
        int sum = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(arr[i][j] % 2 != 0){
                    sum++;
                }
            }
        }
        return sum;
    }

int main(){
    int m,n;
    cin >> n >> m;
    vector<vector<int>>a;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    } 
    cout << oddCells(n, m, a);
}

