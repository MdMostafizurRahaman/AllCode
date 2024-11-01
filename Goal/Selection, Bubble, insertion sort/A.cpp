#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<char>s;
        for(int i = 0; i < n; i++){
            char ch;
            cin >> ch;
            s.push_back(ch);
        }

        int i = 0;
        for(; i < n; i++){
            if(s[i] == 'B'){
                break;
            }
        }
        int left = i;

        int j = n - 1;
        for(; j >= 0; j--){
            if(s[j] == 'B'){
                break;
            }
        }
        int right = j;
        if(right < left ){
            cout << (left - right);
        }
        else if(right == left){
            cout << 1 << endl;
        }
        else{
            cout << (right - left + 1) << endl;
        }
    }
}