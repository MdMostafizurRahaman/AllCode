#include<bits/stdc++.h>
using namespace std;

int isPalindrome(string S)
	{
        int i, j;
	    for(i = 0, j = S.size() - 1; i < j; i++, j--){
	        if(S[i] != S[j]){
                return 0;
            }
	    }return 1;
	   
	}

int main(){
    string str;
    cin >> str;
    cout << isPalindrome(str);
}