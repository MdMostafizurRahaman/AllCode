#include<bits/stdc++.h>
using namespace std;

void doSomething(int arr[], int n){
    arr[0] += 10;
    arr[1] += 20;

    cout << "Inside the function arr[0]:" << arr[0] << endl << "arr[1]:" << arr[1] << endl; 
}

int main(){
    int n = 5;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    } 
    doSomething(arr, n);
    cout << "Outside the functionarr[0]:" << arr[0] << endl << "arr[1]:" << arr[1] << endl; 

}

//array is always pass by reference...