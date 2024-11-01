#include<bits/stdc++.h>
using namespace std;

int numSteps(std::string str) {
    int s = 0;
    int n = str.size() - 1;
    int i = 0;
    int cnt = 0;

    while (n >= 0) {
        int x = pow(2, i);
        s += (str[n] - '0') * x;
        n--;
        i++;
    }

    while (s != 1) {
        if (s % 2 == 0) {
            s /= 2;
        } else {
            s += 1;
        }
        cnt++;
    }

    return cnt;
}
    int main(){
        string str;
        cin >> str;
        int sum = numSteps(str);
        cout << sum;
    }

    //1111011110000011100000110001011011110010111001010111110001