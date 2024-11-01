#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string, int>mpp;
    int n;
    cin>>n;
    while(n--){
        string s;
        int a, b;
        cin >> a >> s >> b;
        if(a == 1){
            mpp[s] += b;
        }
        else if(a == 2){
            mpp[s] -= b;
        }
        else if(a == 3){
             auto it = mpp.find(s);
            if (it != mpp.end()) {
                std::cout << it->second << std::endl; 
            } else {
                std::cout << 0 << std::endl;
            }
        }
        
    }
}