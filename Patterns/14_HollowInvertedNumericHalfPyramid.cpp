#include <bits/stdc++.h>
using namespace std;

void HollowInvertedNumericHalfPyramidPattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(i==0 || j==0 || j==n-i-1){
                cout << j+1 << " ";
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
    HollowInvertedNumericHalfPyramidPattern(n);
    return 0;
}

/*

Enter a Number: 5
1 2 3 4 5
1     4
1   3
1 2
1

 */