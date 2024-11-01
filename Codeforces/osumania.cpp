#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        char arr[n][4];  
        int a[n] = {0};  

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < 4; j++) {
                cin >> arr[i][j];  
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < 4; j++) {
                if(arr[i][j] == '#') {
                    a[i] = j + 1;  
                }
            }
        }

        for(int i = n - 1; i >= 0; i--) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}



