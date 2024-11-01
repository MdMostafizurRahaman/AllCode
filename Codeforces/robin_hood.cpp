#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    optimize();
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int sum = 0, num = 0;
        while(n--){
            int a;
            cin >> a;
            if(a >= k){
                sum += a;
            }else if(a == 0 && sum > 0){
                sum -= 1;
                num++;
            }
        }cout << num << endl;
    }

}