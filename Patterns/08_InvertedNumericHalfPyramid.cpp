#include <bits/stdc++.h>
using namespace std;

void InvertedNumericHalfPyramidPattern(int n){
    for(int i=0; i<n; i++){
        int num = 1;
        for(int j=0; j<n-i; j++){
            cout << num++ << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;
    InvertedNumericHalfPyramidPattern(n);
    return 0;
}
