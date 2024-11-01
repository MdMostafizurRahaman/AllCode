#include<bits/stdc++.h>
using namespace std;

void doSomething(int num){
    cout << num << endl;
    num += 20;
    cout << num << endl;
    num += 30;
    cout << num << endl;
    num += 40;
    cout << num << endl;
}

void done(int &num){
    cout << num << endl;
    num += 20;
    cout << num << endl;
    num += 30;
    cout << num << endl;
    num += 40;
    cout << num << endl;
}

int main(){
    int num = 100;
    cout << "Pass by value" << endl;
    doSomething(num);
    cout << num << endl;
    cout << "Pass by reference " << endl;
    done(num);
    cout << num;
}

//& is used to pass by reference.
// if it is happen pass by value the function get a copy of that input.
// but pass by reference get that input 