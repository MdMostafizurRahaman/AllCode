#include<bits/stdc++.h>
using namespace std;

long long sumOfSeries(long long N) {
    if(N <= 0){
        return 0;
    }
    return N * N * N + sumOfSeries(N-1);
}

int main(){
    int N; 
    cin >> N;
    cout << sumOfSeries(N);
    return 0;
}
