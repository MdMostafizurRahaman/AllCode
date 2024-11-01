#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>st;
    int n;
    cin >> n;
    for(int i = 0 ;i < n; i++){
        int a, b;
        cin >> a >> b;
        if(a == 1){
            st.insert(b);
        }
        else if(a == 2){
            st.erase(b);
        }
        else{
            if(st.find(b) != st.end()){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
}