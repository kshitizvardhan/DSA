#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout << "Enter a Number: ";
    cin >>  num;
    if(num%2 == 0){
        cout << num << " is even.";
    } else {
        cout << num << " is odd.";
    }

    return 0;
}