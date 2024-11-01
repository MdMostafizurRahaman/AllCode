#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v;
        vector<char>res;
        vector<char>alp = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',  
                          'o', 'p', 'q', 'r', 's', 't', 'u', 
                          'v', 'w', 'x', 'y', 'z' };
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            v.push_back(a);
        }
        int j = 0;
        for(int i = 0; i < n; i++){
            if(v[i] == 0){
                res.push_back(alp[j]);
                j++;
            }
        }
        for(int i = 0; i < n; i++){
            if(v[i] > 0){
                for(int j = 0; j < i; j++){
                    if(v[i] - v[j] == 1){
                        res.push_back(alp[j]);
                        break;
                    }
                }
            }
        }
        for(int i = 0; i < n; i++){
            cout << res[i]; 
        }
        cout << endl;

    }
}