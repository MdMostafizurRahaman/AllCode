#include<bits/stdc++.h>
using namespace std;

int Armstrong(int n){
    int sum = 0, check = n, count = 0, original = n;
    while(n > 0){
        int lastDigit  = n % 10;
        n = n / 10;
        count++;
    }
    while(check > 0){
        int lastDigit  = check % 10;
        sum = sum + pow(lastDigit, count);
        check = check / 10;
    }

    if(original == sum){
        cout << "true";
    }
    else{
        cout << "false";
    }
}

int main(){
    int n;
    cin >> n;
    Armstrong(n); 
}