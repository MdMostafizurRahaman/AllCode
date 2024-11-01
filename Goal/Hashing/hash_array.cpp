//13 size hashing
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    //pre-compute
    int hash[256] = {0};
    for(int i = 0; i < s.size(); i++){
        hash[s[i]]++;
    }

    int q;
    cout << "How many searched_char want to search:";
    cin >> q;
    while(q--){
        char searched_char;
        cout << "Searched searched_char:";
        cin >> searched_char;
        //fetch
        cout << hash[searched_char] << endl;
    }
    return 0;

}
/*
input
abaaabbrds
5
a
b
c
r
s
*/
