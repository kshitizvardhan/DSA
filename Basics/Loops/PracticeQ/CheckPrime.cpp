#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    if (num <= 1) {
        cout << "Not a Prime Number" << endl;
        return 0;
    }

    bool flag = true;
    for(int i=2; i<=sqrt(num); i++){
        if(num%i == 0){
            flag = false;
            break;
        }
    }

    if(flag){
        cout<< "It's a Prime Number" << endl;
    } else {
        cout<< "Not a Prime Number" << endl;
    }

    return 0;
}