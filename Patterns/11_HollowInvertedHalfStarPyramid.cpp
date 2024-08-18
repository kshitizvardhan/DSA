#include <bits/stdc++.h>
using namespace std;

void HollowInvertedHalfStarPyramidPattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(i==0 || j==0 || j==n-i-1){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    HollowInvertedHalfStarPyramidPattern(n);
    return 0;
}