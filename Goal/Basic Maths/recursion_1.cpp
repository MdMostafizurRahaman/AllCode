#include<bits/stdc++.h>
using namespace std;

int recursionF(int n){
    if(n >= 0){
        printf("Recursion:%d\n",n);
        n--;
        recursionF(n);
    }
    return 0;
}

int main(){
    recursionF(10);
    

     return 0;
}