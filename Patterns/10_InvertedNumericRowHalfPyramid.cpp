#include <bits/stdc++.h>
using namespace std;

void InvertedNumericRowHalfPyramidPattern_1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout << i+1 << " ";
        }
        cout << endl;
    }
}
void InvertedNumericRowHalfPyramidPattern_2(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout << n-i << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter Number: ";
    cin >> n;
    InvertedNumericRowHalfPyramidPattern_1(n);
    cout << endl;
    InvertedNumericRowHalfPyramidPattern_2(n);
    return 0;
}
