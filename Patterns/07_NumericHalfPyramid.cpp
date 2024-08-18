#include <bits/stdc++.h>
using namespace std;

void NumericHalfPyramidPattern(int n){
    for(int i=0; i<n; i++){
        int num = 1;
        for(int j=0; j<=i; j++){
            cout << num++ << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;
    NumericHalfPyramidPattern(n);
    return 0;
}

// Enter Number: 5
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5