#include<bits/stdc++.h>
using namespace std;

int dataTypeSize(string str) {
        // your code here()
        if(str == "Character"){
            return sizeof(char);
        }
        else if(str == "Integer"){
            return sizeof(int);
        }
        else if(str == "Long"){
            return sizeof(long);
        }
        else if(str == "Float"){
            return sizeof(float);
        }
        else if(str == "Double"){
            return sizeof(double);
        }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        cout << dataTypeSize(str);
    }
}